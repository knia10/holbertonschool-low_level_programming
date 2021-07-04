#include "holberton.h"
/**
 *reverse_array - function that reverses the content of an array of integers.
 *@a: pointer array.
 *@n: number of elements of the array.
 */

void reverse_array(int *a, int n)
{
	int aux;
	int j;
	int cn;

	j = 0;
	cn = n - 1;

	while (j < cn)
	{
		aux = *(a + j);
		*(a + j) = *(a + cn);
		*(a + cn) = aux;
		j++;
		cn--;
	}
}
