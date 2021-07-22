#include "function_pointers.h"
#include <stddef.h>

/**
 *int_index - function that searches for an integer.
 *@array: array.
 *@size: number of elements in the array.
 *@cmp: pointer to the function.
 *Return: the index of the first element.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int acount;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (acount = 0; acount < size; acount++)
	{
		if (cmp(*(array + acount)))
		{
			return (acount);
		}
	}
	return (-1);
}
