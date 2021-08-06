#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * @n: integer
 * @m: integer
 * Return: how many bits differ
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int difbit = 0;
	unsigned long int dif;

	/* Xor both nums to show bit 1 if different bits */
	dif = n ^ m;

	/* keep shifting difference to right and tallying the ones up */
	while (dif > 0)
	{
		difbits += (dif & 1);
		dif >>= 1;
	}
	return (difbits);
}
