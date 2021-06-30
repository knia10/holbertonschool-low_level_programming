#include "holberton.h"

/**
 *swap_int - function that swaps the values of two integers.
 *Description: Use bubble Method.
 *@a : pointers to check.
 *@b: pointer to check.
 */

void swap_int(int *a, int *b)
{
int aux;
aux = *a;
*a = *b;
*b = aux;
}
