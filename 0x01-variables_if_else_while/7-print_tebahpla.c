#include <stdio.h>
/**
  * main - C progam that prints the lowercase alphabet in reverse,
  * followed by a new line.
  * Return: 0 (success)
  */
int main(void)
{
	int rv;

	for (rv = 'z'; rv >= 'a'; rv--)
	{
		putchar(rv);
	}
		putchar('\n');
		return (0);
}
