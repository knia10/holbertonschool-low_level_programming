#include <stdio.h>
/**
 *main - print numbers and letters
 *Description: use conditional
 *Return: Always 0 (Success)
 */

int main(void)
{
	int num = '0';
	int hexa = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	while (hexa <= 'f') /*print a-f to finish hexbase*/
	{
		putchar(hexa);
	    hexa++;
	}

	putchar('\n');

	return (0);
}
