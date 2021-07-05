#include "holberton.h"

/**
 * leet - function that encodes a string.
 * @p: pointer.
 *Return: numbers to letters
 */

char *leet(char *p)
{
	char l[] = {97, 65, 101, 69, 111, 79, 116, 84, 108, 76};
	int n[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int i;
	int j;

	for (j = 0; p[j] != '\0'; j++)
	{
		for (i = 0; l[i] != '\0'; i++)
		{
			if (p[j] == l[i])
				p[j] = n[i];
		}
	}
	return (p);
}
