#include "holberton.h"
/**
 * create_file - function that creates a file.
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write.
 * Return: -1 if filename is NULL or 1 on success.
 */
int create_file(const char *filename, char *text_content)
{
	int foo, leng, readve;

	if (filename == NULL)
		return (-1);
	foo = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (foo == -1)
		return (-1);
	if (!text_content)
		return (1);
		for (leng = 0; text_content[leng] != '\0'; leng++)
		{
			;
		}
	readve = write(foo, text_content, leng);
	if (readve == -1)
		return (-1);
	close(foo);
	return (1);
}
