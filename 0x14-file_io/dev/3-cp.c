#include "bootcamp.h"

/**
 * err_close - print out error message when file descriptor cannot be closed
 *
 * @fd: file descriptor that cannot be closed
 *
 * Return: void
 */

void err_close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * err_read - print out error messae when file cannot be read
 *
 * @file_from: file to be read from
 *
 * Return: void
 */

void err_read(char *file_from)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	exit(98);
}


/**
 * err_write - print out error message when file cannot be written
 *
 * @file_to: file to write to
 *
 * Return: void
 */

void err_write(char *file_to)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
	exit(99);
}

/**
 * main - entry point
 *
 * @argc: number of commandline arguments
 * @argv: array of commandline arguments
 *
 * Return: 0 if successful, or else see exit code
 */
int main(int argc, char **argv)
{
	int fd_1, fd_2;
	char buffer[1024];
	ssize_t r_count, w_count;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_1 = open(argv[1], O_RDONLY);
	if (fd_1 == -1)
		err_read(argv[1]);

	fd_2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR |
		    S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_2 == -1)
	{
		err_close(fd_1);
		err_write(argv[2]);
	}
	do {
		r_count = read(fd_1, buffer, 1024);
		if (r_count == -1)
		{
			err_close(fd_1);
			err_close(fd_2);
			err_read(argv[1]);
		}
		w_count = write(fd_2, buffer, r_count);
		if (w_count != r_count)
		{
			err_close(fd_1);
			err_close(fd_2);
			err_write(argv[2]);
		}
	} while (r_count > 0); /* while still reading data */

	err_close(fd_1);
	err_close(fd_2);
	return (0);
}
