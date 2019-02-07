#include <stdio.h>
/**
  * main - C progam that prints numbers from 00 to 99.
  * Numbers must be separated by ,
  * followed by a new line.
  * Return: 0 (success)
  */
int main(void)
{
int num = 0;
int chg = 44;

	while (num <= 99)
	{

	putchar((char)num / 10 + '0');
	putchar((char)num % 10 + '0');
		if (num < 99)
		{
			putchar(chg);
			putchar(' ');
		}
	num++;
	}
	putchar ('\n');
	return (0);
}
