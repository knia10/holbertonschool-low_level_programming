#include "holberton.h"
/**
 * *_strcat - function that concatenates two strings.
 *@dest: string containing other aggravated strings.
 *@src: string to copy to dest.
 *@aux: array copy.
 *Return: attached strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	
	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;   
	}
	dest[i] = '\0';
	return (dest);
}
