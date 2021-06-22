#include <stdio.h>

/**
 *main - numbers pair but no repeats
 *Descriptions: use conditionals
 *Return: Always 0 (Success)
 */

int main(void)
{
	int twod;
	int oned;
	int two;
	int one;

	for (twod = '0'; twod <= '9'; twod++)
	{
		for (oned = '0'; oned <= '9'; oned++)
		{
			for (two = twod; two <= '9'; two++)
			{
				for (one = oned + 1; one <= '9'; one++)
				{
					putchar(twod);
					putchar(oned);
					putchar(' ');
					putchar(two);
					putchar(one);

					if (!((twod == '9' && oned == '8') &&
						  (two == '9' && one == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				one = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}
