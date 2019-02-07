#include <stdio.h>
/**
  * main - C progam that prints all single digit numbers of base10 starting
  * 0 followed by a new line. No useage of any variable of type char,
  * can only use putchar twice.
  * Return: 0 (success)
  */
int main(void)
{
	int num;

	num = 48;
	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
