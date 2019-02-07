#include <stdio.h>
/**
  * main - C progam that prints all numbers of base16 in lowercase
  * 0 followed by a new line.
  * Return: 0 (success)
  */
int main(void)
{
	int num;
	int chg;

	num = '0';
	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	chg = 'a';
	while (chg <= 'f')
	{
		putchar(chg);
		chg++;
	}
	putchar('\n');
	return (0);
}
