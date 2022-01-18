#include "search_algos.h"

/**
* linear_search -  function that searches for a value in an array of integers
* using the Linear search algorithm
* @array: is a pointer to the first element of the array
* @size: is the number of elements in array
* @value: is the value to search
* Return: the first index where value is located or -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t iter = 0;

	if (array == 0 || array == NULL)
	{
		return (-1);
	}
	while (iter < size)
	{
		printf("Value checked array[%ld] = [%d]\n", iter, array[iter]);
		if(array[iter] == value)
		{
			return (iter);
		}
		iter++;
	}
	return (-1);
}
