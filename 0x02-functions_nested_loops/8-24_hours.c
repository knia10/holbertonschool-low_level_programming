#include "holberton.h"

/**
 * jack_bauer - print minutes 00:00 to 23:59 of the day of Jack Bauer
 * Description:  prints every minute of the day of Jack Bauer
 */

void jack_bauer(void)
{
	int hours = 0;
	int min = 0;

	while (hours < 24)
	{
		while (min < 60)
		{
			_putchar('0' + (hours / 10));
			_putchar('0' + (hours % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
			min++;
		}
		min = 0;
		hours++;
	}
}
