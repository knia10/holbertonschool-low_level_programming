#include "holberton.h"
/**
 * *string_toupper - function that changes all lowercase letters to uppercase.
 * @s: pointer chack.
 *Return: string uppercase.
  */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 97 + 65;
	}
	return (s);
}
