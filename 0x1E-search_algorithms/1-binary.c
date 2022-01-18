#include "search_algos.h"

/**
* binary_search - function that searches for a value in an array of integers
* using the Linear search algorithm
* @array: is a pointer to the first element of the array
* @size: is the number of elements in array
* @value: is the value to search
* Return: the first index where value is located or -1
*/

int binary_search(int *array, size_t size, int value)
{
	size_t div = 0, left = 0, right = size - 1;
	if (array == 0 || array == NULL)
	{
		return (-1);
	}
	while (left <= right)
	{
		array_div(array, left, right);
		div = (left + right) / 2;
		if (array[div] == value)
		{
			return (div);
		}
		else if (array[div] > value)
		{
			right = div - 1;
		}
		else
		{
			left = div + 1;
		}
	}
	return (-1);
}

/**
* array_div - print split array
* @left: left array
* @right: right array
*/

void array_div(int *array, size_t left, size_t right)
{
	size_t iter = 0;

	printf("Searching in array: ");

	for (iter = left; iter <= right; iter++)
	{
		if (iter == right)
		{
			printf("%d\n", array[iter]);
		}
		printf("%d, ", array[iter]);
	}
}
