#include "holberton.h"
/**
 * rev_string - prints string in reverse
 * @s: character to be iterated through.
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int rev, verse;
	char letter;

	for (rev = 0; s[rev] != 0; rev++)
	{
	}
	verse = 0;
	rev = rev - 1;
	while (verse < rev)
	{
		letter = s[rev];
		s[rev] = s[verse];
		s[verse] = letter;
		verse++;
		rev--;
	}
}
