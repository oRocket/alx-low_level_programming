#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number for argument
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_assist(n, 1));
}
/**
 * _sqrt_assist - aids function for _sqrt_recursion
 * @n: number for argument
 * @a: integer to square
 * Return: naturak square root of n
 */
int _sqrt_assist(int n, int a)
{
	if (a * a == n)
	{
		return (a);
	}
	if (a * a > n)
	{
		return (-1);
	}
	return (_sqrt_assist(n, a + 1));
}
