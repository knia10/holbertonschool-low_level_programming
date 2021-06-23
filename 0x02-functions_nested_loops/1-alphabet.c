#include "holberton.h"
/**
 * print_alphabet - function, in lowercase
 * Descrition:use conditional
 * Return: 0
 */

void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
