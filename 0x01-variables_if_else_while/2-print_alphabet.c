#include <stdio.h>
/**
 *main - print alpabeth in lowercase
 *Description: use conditional
 * Return: void
 */

int main(void)
{
	char abc = 'a';

	while (abc <= 'z')
	{
		putchar(abc);
		abc++;
	}
	putchar('\n');

	return (0);
}
