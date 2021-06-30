#include "Holberton.h"
/**
 *_puts - function that prints a string.
 *Description: use loop and pointer.
 *@str: variable to chack.
 *Return: string.
 */

void _puts(char *str)
{
	int i;
	for (i = 0; (str[i]) != '\0'; i++)
	{
		_putchar (str[i]);
	}
	return (str);
}
