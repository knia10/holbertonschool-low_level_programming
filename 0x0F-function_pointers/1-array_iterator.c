#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function that executes a function given as a parameter.
 *@array: array.
 *@size: size of the array.
 *@action: pointer to the function you need to use.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t acount;

	if (array != NULL && action != NULL)
	{

		for (acount = 0; size > acount; acount++)
		{
			action(array[acount]);
		}
	}
}
