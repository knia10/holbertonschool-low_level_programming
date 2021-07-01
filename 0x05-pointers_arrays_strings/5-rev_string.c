#include "holberton.h"
/**
 *_strlen -  function that returns the length of a string.
 *Description: use loop.
 *@s: variable to check.
 *Return: return a char i.
 */

int _strlen(char *s)
{
		int i;

		for (i = 0; *s != '\0'; i++)
		{
			s++;
		}
		return (i);
}

/**
 *_strlen -  function that returns the length of a string.
 *Description: use loop.
 *@s: variable to check.
 *Return: return a char i.
 */

void rev_string(char *s)
{
	int c = 0;
	char aux;
	int r = (_strlen(s) - 1);

	while (c > r)
	{
		aux = s[c];
		s[c] = s[r];
		s[r] = aux;

		c++;
		r--;
	}
}
