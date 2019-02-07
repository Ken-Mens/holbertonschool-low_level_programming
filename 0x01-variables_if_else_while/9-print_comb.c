#include <stdio.h>
/**
  * main - C progam that prints all possible combinations of single
  * digit numbers
  * Return: 0 (success)
  */
int main(void)
{
	int num;
	int chg = 44;

	num = '0';
	while (num <= '9')
	{
		putchar(num);
		if (num != '9')
		{
			putchar (chg);
			putchar(32);
		}
		num++;
	}
		putchar ('\n');
		return (0);
	}
