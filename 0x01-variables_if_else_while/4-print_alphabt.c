#include <stdio.h>

/**
 *main - print abc a-z without q and e
 *Descriition: use condiotional
 *Return: Always 0 (Success)
 */

int main(void)
{
	char abc = 'a';

	while (abc <= 'z')
	{
		if ((abc != 'q') && (abc != 'e'))
		{
			putchar(abc);
		}
		abc++;
	}
	putchar('\n');

	return (0);
}
