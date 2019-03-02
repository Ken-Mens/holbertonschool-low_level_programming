#include <stdio.h>
/**
 * main - function that prints its name followed by new line
 * @argc: argument count
 * @argv: the array of argument
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
