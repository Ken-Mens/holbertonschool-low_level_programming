#include "holberton.h"
/**
 * append_text_to_file - appends text text at the end of a file.
 * @filename: name of file.
 * @text_content: NUll terminated string.
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int foo, leng = 0;

	if (filename == NULL)
		return (-1);
	foo = open(filename, O_RDWR | O_APPEND);
	if (foo == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (; text_content[leng] != '\0'; leng++)
		break;
	write(foo, text_content, leng);
	close(foo);
		return (1);
}