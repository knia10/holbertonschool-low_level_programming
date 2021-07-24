#include "variadic_functions.h"

/**
 *sum_them_all - function that returns the sum of all its parameters.
 *@n: variable add.
 *Return: add.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int nadd = 0;
	unsigned int acount;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);

	for (acount = 0; acount < n; acount++)
	{
		nadd += va_arg(ap, unsigned int);

	}
	va_end(ap);

	return (nadd);
}
