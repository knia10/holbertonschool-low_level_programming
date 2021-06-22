#include <stdio.h>

/**
 *main - print lowercase and uppercase a-z A-Z
 *Description: use conditional
 *Return: Always 0 (Success)
 */

int main(void)
{
	char lc = 'a';
	char cl = 'A';

	while (lc <= 'z') 
	{
		putchar(lc);
		lc++;
	}

	while (cl <= 'Z')
	{
		putchar(cl);
		cl++;
	}

	putchar('\n');

	return (0);
}
