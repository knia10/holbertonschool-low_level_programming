#include "holberton.h"
/**
 *rev_string -  function reverse a string.
 *Description: use loop.
 *@S: variable to check.
 *Return: return a char.
 */

void rev_string(char *s)
{
	char rev[700];
	int x = 0;
	int j = 0;

	while (s[x] != '\0')
	{
		rev[x] = s[x];
		x++;
	}
	x = x - 1;

	while (x >= 0)
	{
		s[a] = rev[x];
		a++;
		x--;
	}
}
