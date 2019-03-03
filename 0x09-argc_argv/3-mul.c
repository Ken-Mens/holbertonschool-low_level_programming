#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: argument array of parameters
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int count = 1, x = 1;


	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (; count < argc; count++)
		{
			x *= atoi(argv[count]);
		}
	}
	printf("%d\n", x);
	return (0);
}
