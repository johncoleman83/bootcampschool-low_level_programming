#include "holberton.h"
/**
 * _strlen - returns string length of input string
 * @s: string to check length of
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: content to be in the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (close(fd) == -1 ? -1 : 1);
	len = _strlen(text_content);
	if (write(fd, text_content, len) == -1)
	{
		close(fd);
		return (-1);
	}
	return (close(fd) == -1 ? -1 : 1);
}
