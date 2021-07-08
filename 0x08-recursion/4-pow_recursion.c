#include "holberton.h"

/**
 *_pow_recursion - function that evalue of x raised to the power of y.
 *@x: number to return.
 *@y: potency of x.
 *Return: result to x power y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (x == 0)
	{
		return (0);
	}
	if (x == 1 || y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
