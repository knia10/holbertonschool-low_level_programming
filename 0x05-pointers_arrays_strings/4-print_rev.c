#include "holberton.h"

/**
 *print_rev - function that prints a string, in reverse.
 *Description: use loops.
 *@s: use pointer.
 *Return: char.
 */

void print_rev(char *s)
{
	int tam = 0;
	int cont;

	while (*s != '\0')
	{
		tam++;
		++s;
	}

	s--;

	for (cont = tam; cont > 0; cont--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
