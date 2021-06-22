#include <stdio.h>

/**
 *main - print all combinations of three different digits
 *Return: Always 0 (Success)
 */

int main(void)
{
	int oned;
	int twod;
	int threed;

	for (threed = '0'; threed <= '9'; threed++)
	{
		for (twod = (threed + 1); twod <= '9'; twod++)
		{
			for (one = (twod + 1); oned <= '9'; oned++) /*ones*/
			{
				putchar(threed);
				putchar(twod);
				putchar(oned);
				if (threed != '7' || twod != '8' || oned != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
