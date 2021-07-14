#include "holberton.h"

/**
 * *_memset - function that fills memory with a constant byte.
 * @s: represents a pointer to the block of memory to fill.
 *@b: is the character to fill s.
 *@n: represents the size of the memory block to fill.
 *Return: Area Array.
 */

char *_memset(char *s, char b, unsigned int n)
{

	if (n > 0)
	{
		unsigned int i;

		for (i = 0; i < n; i++)
		{
			s[i] = b;
			
		}
		
	}
	return (s);
	
}
