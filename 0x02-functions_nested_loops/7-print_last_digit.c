#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: integer argument
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	_putchar('0' + (n % 10));

	return (n % 10);
}
