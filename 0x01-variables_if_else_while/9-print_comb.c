#include <stdio.h>

/**
 *main - number separated with commas
 *Description: use conditional
 *Return: Always 0 (Success)
 */

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');

	return (0);
}
