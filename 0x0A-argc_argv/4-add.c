#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * number - funtion verifique if number or other.
 *@arrg: array arguments.
 *Return: 1 if number, 0 is diferent to number.
 */

bool number(char *arrg[])
{
	int c;

	for (c = 0; arrg[c]; c++)
	{
		if (!(arrg[c] >= '0' && arrg[c] <= '9'))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - program that adds positive numbers.
 *@argc: counter arguments.
 *@argv: array of arguments.
 *Return: 1 if not is number.
 */

int main(int argc, char *argv[])
{
	int i;
	int add;

	if (argc == 1)
	{
		printf("0\n");
	}

	add = 0;

	for (i = 1; argc > i; i++)
	{
		if (number(argv[i]))
		{
			add += atoi(argv[i]);
		}
		else
		{
			printf("error\n");
			return (1);
		}
	}
	printf("%i\n", add);
	return (0);
}
