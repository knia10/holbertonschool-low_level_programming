#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 *@argc: counter arguments.
 *@argv: array of arguments.
 *Return: mutiplies or error.
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	printf("error\n");
	return (1);
}
