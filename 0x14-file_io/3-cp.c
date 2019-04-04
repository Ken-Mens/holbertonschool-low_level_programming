#include "holberton.h"
/**
 * main - copies the content of one file to another
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int f_rom, f_to, red, cl_this, cl_that;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	f_rom = open(argv[1], O_RDONLY);
	if (f_rom < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		 exit(98);
	}
	f_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
			while ((red = read(f_rom, buf, 1024)))
			(write(f_to, buf, red));
		if (f_to < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	red = read(f_rom, buf, 1024);
	if (red == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	cl_this = close(f_rom);
	cl_that = close(f_to);
	if (cl_this == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cl_this), exit(100);
	}
		else if (cl_that == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cl_that), exit(100);
		}
	return (0);
}
