#include "3-calc.h"

/**
 * op_add - function thats add.
 *@a: num1.
 *@b: num2.
 *Return: add.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function thats substracs.
 *@a: num1.
 *@b: num2.
 *Return: sub.
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function thats multiplies.
 *@a: num1.
 *@b: num2.
 *Return: mul.
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function thats divides.
 *@a: num1.
 *@b: num2.
 *Return: div.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function thats module.
 *@a: num1.
 *@b: num2.
 *Return: mod
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
