#include <stdio.h>

/**
 * main - program that prints all the arguments it receives
 * @argc: counts all arguments
 * @argv: array of arguments
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
