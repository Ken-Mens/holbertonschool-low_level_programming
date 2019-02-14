#include "holberton.h"
/**
 * main - function that prints the numbers from 1 to 100
 * followed by a new line. For every multiple of 3 print Fizz
 * instead of number and every multiple of 5 print Buzz.
 * Return: Always 0.
 */

int main(void)
{
	int foo = 1;

	while (foo <= 100)
	{
	if (foo % 3 == 0 && foo % 5 == 0)
	printf("FizzBuzz ");
	else if (foo % 5 == 0)
	{
	if (foo == 100)
		{
		printf("Buzz");
		printf("\n");
		}
		else
		printf("Buzz ");
	}
	else if (foo % 3 == 0)
	printf("Fizz ");
	else
	printf("%d ", foo);
	foo++;
	}
	return (0);
}
