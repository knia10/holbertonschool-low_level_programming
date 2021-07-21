#include "function_pointers.h"

/**
 * print_name -  function that prints a name.
 *@name: variable to use.
 *@f: pointer to a function.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
