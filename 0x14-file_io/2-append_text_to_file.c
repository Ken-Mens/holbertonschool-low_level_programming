#include "holberton.h"
/**
 * append_text_to_file - appends text text at the end of a file.
 * @filename: name of file.
 * @text_content: NUll terminated string.
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int foo, leng = 0, wrote;

	if (filename == NULL)
		return (-1);
	foo = open(filename, O_WRONLY | O_APPEND);
	if (foo == -1)
		return (-1);
	if (!text_content)
		return (1);
	for (; text_content[leng] != '\0'; leng++)
		break;
	wrote = write(foo, text_content, leng);
	if (wrote == -1)
	return (-1);
	close(foo);
		return (1);
}
