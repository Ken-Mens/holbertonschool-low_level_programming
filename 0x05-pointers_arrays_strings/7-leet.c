#include "holberton.h"
/**
* leet - function that encodes a string into 1337
* @i: character pointer
* Return: pointer to char
*/
char *leet(char *i)
{
	int x, y;
	char lett1[] = "AaEeOoTtLl";
	char lett2[] = "4433007711";

	while (i[x])
	{
		for (y = 0; lett1[y]; y++)
		{
			if (i[x] == lett1[y])
			{
				i[x] = lett2[y];
			}
		}
		x++;
	}
	return (i);
}
