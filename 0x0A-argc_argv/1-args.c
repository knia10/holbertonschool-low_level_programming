#include "holberton.h"
#include <stdio.h>

/**
 * main - Funtion counter arguments
 *@argc: counter arguments.
 *@argv: array arguments.
 *Return: number of arguments
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	if (argc >= 0)
	{
		argc = argc - 1;
		printf("%d\n", argc);
	}
	return (0);
}
