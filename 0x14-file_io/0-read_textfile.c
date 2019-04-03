#include "holberton.h"
/**
 * read_textfile - reads text file and prints it to POSIX standard
 * @filename: name of file to be manipulated
 * @letters: actual letters in string.
 * Return: number of chars read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int afile, readve;
	char *ptr;

	if (filename == NULL)
		return (0);
	afile = open(filename, O_RDONLY);
	if (afile == -1)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
		return (0);

	readve = read(afile, ptr, letters);
	if (readve == -1)
		return (0);
	write(STDOUT_FILENO, ptr, readve);
	close(afile);
	free(ptr);
	return (readve);
}
