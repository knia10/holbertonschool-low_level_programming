#include "holberton.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int num;
	int col;
	int multi;

	for (num = 0; num <= 9; num++)
	{
		for (col = 0; col <= 9; col++)
		{
			multi = (num * col);

			if (col == 0)
			{
				_putchar('0' + multi);
			}
			else if (multi <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + multi);
			}
			else if (multi > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (multi / 10));
				_putchar('0' + (multi % 10));
			}
		}
		_putchar('\n');
	}
}
