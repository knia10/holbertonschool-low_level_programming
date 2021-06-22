#include <stdio.h>

/**
 *main - print 00 to 99 possible different combinations of two digits
 *Descriptions: use conditionals
 *Return: Always 0 (Success)
 */

int main(void)
{
	int onenum;
	int twonum;

	for (twonum = '0'; twonum <= '9'; twonum++) /*increment tens*/
	{
		for (onenum = (twonum + 1); onenum <= '9'; onenum++)
		{
			putchar(twonum);
			putchar(onenum);

			if (twonum != '8' || onenum != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
