#include "main.h"

/**
 * _prime_helper - recursively checks if n has any divisor starting from div
 * @n: the integer to test for primality
 * @div: the current candidate divisor
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int _prime_helper(int n, int div)
{
	if (div > n / div)
	{
		return (1);
	}
	if (n % div == 0)
	{
		return (0);
	}

	return (_prime_helper(n, div + 1));
}

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: the integer to evaluate
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (_prime_helper(n, 2));
}
