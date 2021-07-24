#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 *@separator: string to be printed between the strings.
 *@n:number of strings passed to the function.
 *Return: string.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int acount;
	char *str;/*argumento tipo char para recorrer*/

	va_list ap;

	va_start(ap, n);
	for (acount = 1; acount <= n; acount++)/*recorre argumentos*/
	{
		str = va_arg(ap, char *);/*solo obtiene los tipo char*/
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (acount != n && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);

	printf("\n");
}
