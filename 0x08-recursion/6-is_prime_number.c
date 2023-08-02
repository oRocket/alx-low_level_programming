#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: integer to be input.
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prime_helper(n, 2));
}
/**
 * _prime_helper - helper function for is_prime_number.
 * @n: number to be evaluated.
 * @i: integer to be checked for divisibility.
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int _prime_helper(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (_prime_helper(n, i + 1));
}
