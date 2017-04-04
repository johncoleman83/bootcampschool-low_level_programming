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
 * append_text_to_file - appends text to the end of a file
 * @filename: name of file to have text appended to
 * @text_content: text to be appended to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	len = _strlen(text_content);
	if (write(fd, text_content, len) == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
