#include "main.h"

/**
 * _sqrt_helper - recursively tests candidate values for the square root of n
 * @n: the number whose natural square root is sought
 * @guess: the current candidate root being tested
 *
 * Return: the natural square root of n, or -1 if none exists
 */
int _sqrt_helper(int n, int guess)
{
	if (guess > n / guess)
	{
		return (-1);
	}
	if (guess == n / guess && n % guess == 0)
	{
		return (guess);
	}

	return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number whose natural square root is calculated
 *
 * Return: natural square root of n, or -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}

	return (_sqrt_helper(n, 1));
}
