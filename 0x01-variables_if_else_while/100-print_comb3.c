#include <stdio.h>
/**
  * main - prints number from 0 to 99 using all possible combos
  * with two digits
  * Return: 0 on success
  */
int main(void)
{
	int tre, way;

	for (tre = '0'; tre <= '8'; tre++)
	{
		for (way = tre + 1; way <= '9'; way++)
		{
				if (tre != way)
			{
					putchar(tre);
					putchar(way);
				if (tre == '8' && way == '9')
				{
					;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
		putchar('\n');
		return (0);
	}
