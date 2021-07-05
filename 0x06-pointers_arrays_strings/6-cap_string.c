#include "holberton.h"
/**
 *cap_string - function that capitalizes all words of a string.
 *@ptr: pointer.
 *Return: strings capitalizes.
 */

char *cap_string(char *ptr)
{
	int i;

	i = 0;

	if (ptr[i] >= 97 && ptr[i] <= 122)
		ptr[i] = ptr[i] - 97 + 65;
	i++;

	while (ptr[i] != '\0')
	{
		if ((ptr[i] >= 97 && ptr[i] <= 122)
		    && (ptr[i - 1] == ','
			|| ptr[i - 1] == ';'
			|| ptr[i - 1] == '.'
			|| ptr[i - 1] == '!'
			|| ptr[i - 1] == '?'
			|| ptr[i - 1] == '"'
			|| ptr[i - 1] == '('
			|| ptr[i - 1] == ')'
			|| ptr[i - 1] == '{'
			|| ptr[i - 1] == '}'
			|| ptr[i - 1] == ' '
			|| ptr[i - 1] == '\t'
			|| ptr[i - 1] == '\n'))
			ptr[i] = ptr[i] - 97 + 65;
		i++;
	}
	return (ptr);
}
