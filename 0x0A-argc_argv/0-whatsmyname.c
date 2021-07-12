#include <stdio.h>
#include "holberton.h"

/**
 * main - Funtion main with arguments return name program.
 *@argc: count arguments.
 *@argv: array strings arguments.
 *Return: name the progrm
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
