#include "holberton.h"
/**
 * end_func - function that deals with all standard errors
 * @num: exit status number or file descriptor
 * @str: file name either to_file or from_file, or NULL
 * Return: 97, 98, 99, or 100 depending on input num
 */
int end_func(int num, char *str)
{
	int value;

	switch (num)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		value = 97;
		break;
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
		value = 98;
		break;
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
		value = 99;
		break;
	default:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", num);
		value = 100;
		break;
	}
	return (value);
}
/**
 * main - copies the content of a file to another file
 * @argc: arguments count
 * @argv: pointer to list of argument strings
 * Return: 0 on success, 97, 98, 99, or 100 on failure
 */
int main(int argc, char **argv)
{
	int fd_to, fd_from, read_val;
	char *file_from, *file_to, buffer[BUFLEN];

	if (argc != 3)
		exit(end_func(97, NULL));
	file_from = argv[1], file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		exit(end_func(98, file_from));
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		exit(close(fd_from) == -1 ? end_func(fd_from, NULL) :
			 end_func(99, file_to));
	read_val = read(fd_from, &buffer, BUFLEN);
	while (read_val)
	{
		if (read_val == -1)
			exit(close(fd_from) == -1 ? end_func(fd_from, NULL) :
				 close(fd_to) == -1 ? end_func(fd_to, NULL) :
				 end_func(98, file_from));
		if (write(fd_to, &buffer, read_val) == -1)
			exit(end_func(99, file_to));
		read_val = read(fd_from, &buffer, BUFLEN);
	}
	return (close(fd_from) == -1 ? end_func(fd_from, NULL) :
			close(fd_to) == -1 ? end_func(fd_to, NULL) : 0);
}
