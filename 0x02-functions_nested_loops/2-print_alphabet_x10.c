#include "holberton.h"
/**
 * print_alphabet_x10 - funtion that prints 10 times the alphabet
 *Description: use conditional
 *Return: 0
*/

void print_alphabet_x10(void)
{
	int a;
	int count;

	for (count = 0; count <= 10; count++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
