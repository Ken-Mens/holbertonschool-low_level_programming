/**
 * main - program that adds positive numbers
 * @argc: argument counter
 * @argv: arguments array
 * Return: 0.
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 0, x;

	for (i = 1; i < argc; i++)
	{
		for (x = 0; argv[i][x]; x++)
			if (!isdigit(argv[i][x]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
