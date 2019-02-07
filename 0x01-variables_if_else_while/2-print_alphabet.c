#include <stdio.h>
#include <ctype.h>

/**
  * main - C program that prints alphabet in lowercase,
  * followed by a new line
  * Return: 0 (success)
  */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
