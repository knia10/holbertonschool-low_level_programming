#include <stdio.h>
#include "holberton.h"

/**
 * main - program that prints all arguments it receives.
 *@argc: counter arguments.
 *@argv: pointer array arguments.
 *Return: argument for argument.
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		int i;

		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
