#include "variadic_functions.h"

/**
 *print_numbers - function that prints numbers, followed by a new line.
 *@separator: string to be printed between numbers.
 *@n: number of integers passed to the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int acount;

	va_list ap;

	if (n > 0)
	{
		va_start(ap, n);
		for (acount = 1; acount <= n; acount++)
		{
			printf("%d", va_arg(ap, unsigned int));
			if (acount != n && separator != NULL)

			printf("%s", separator);
		}
		va_end(ap);
	}

	printf("\n");
}
