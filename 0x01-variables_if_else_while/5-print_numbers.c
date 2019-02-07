#include <stdio.h>
/**
  * main - C progam that prints all single digit numbers of base10 starting
  * 0 followed by a new line.
  * Return: 0 (success)
  */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
