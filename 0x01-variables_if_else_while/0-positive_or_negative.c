#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - C program that assigns random number to variable n
  * each time it is executed. n will store different value everytime
  * the program is run. If the number is greater than 0: it is positive.
  * If the number is 0: is zero.
  * If the number is less than zero 0: is negative
  * Return: 0 (success)
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
