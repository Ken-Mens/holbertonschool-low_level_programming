#include <stdio.h>

/**
  * main - C program that prints the alphabet in lowercase, followed
  * by a new line. Prints all the letters except q & e.
  * Return: 0 (success)
  */
int main(void)
{
	int alpha;

	for (alpha = 97; alpha < 123; alpha++)
	{
		if (alpha != 101 && alpha != 113)
		{
			putchar(alpha);
		}
	}
		putchar(10);
		return (0);
}
