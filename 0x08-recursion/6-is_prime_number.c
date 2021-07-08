#include "holberton.h"
/**
 *nprime - the divisor divides it.
 *@n: is prime?
 *@div: number divisor.
 *Return: 1 for prime 0 not prime.
 */

int nprime(int n, int div)
{
	if (n == div)
	{
		return (1);
	}
	if (n % div == 0)
	{
		return (0);
	}
	return (nprime(n, div + 1));
}

/**
 *is_prime_number - returns 1 if the input integer is a prime number.
 *@n: number to return.
 *return: 1 prime, 0 not prime.
 */

int is_prime_number(int n)
{
	int div = 3;

	if (n % 2 == 0)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (nprime(n, div));
}
