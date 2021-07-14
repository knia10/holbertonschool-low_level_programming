#include "holberton.h"
/**
 *_puts - function that prints a string.
 *Description: use loop and pointer.
 *@str: variable to chack.
 *Return: string.
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str++);

	}
	_putchar ('\n');

}
