#include <stdio.h>
/**
 *main - print alpabeth in lowercase
 *Description: use conditional
 * Return: void
 */

int main(void)
{
	int abc = 97;

	while (abc <= 122)
	{
		putchar(abc);
		printf("%d ", abc);
		abc++;
	}
	/*putchar('\n');*/

	return (0);
}
