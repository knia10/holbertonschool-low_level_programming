#include "holberton.h"
/**
 * *_strcat - function that concatenates two strings.
 *@dest: string containing other aggravated strings.
 *@src: string to copy to dest.
 *Return: attached strings
 */

char *_strcat(char *dest, char *src)
{

	char aux[700];
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		aux[j] = dest[i];
		i++;
		j++;
	}
	i = 0;

	while (src[i] != '\0')
	{
		aux[j] = src[i];
		i++;
		j++;
	}
	aux[j] = '\0';
	printf("\nConcatenated string: %s", aux);
	return (dest);
}
