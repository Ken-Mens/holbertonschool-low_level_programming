#include <stdio.h>
/**
 * main - finds and prints largest prime factor of the number 612852475143
 * followed by a new line.
 * Return: Void.
 */
int main(void)
{
	long num = 612852475143;
	long factor = 2;

for ( ; factor < (num / 2); factor++)
	{
	if ((num % factor) == 0)
		{
		num /= factor;
		factor = 2;
		}
	}
	printf("%ld\n", num);
	return (0);

}
