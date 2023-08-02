#include "main.h"
/**
 * assist - assist function for _sqrt_recursion
 * @i: Number to evaluate
 * @j: Number to square
 * Return: square root
 */
int assist(int i, int j)
{
	if (j * j > i)
	{
		return (-1);
	}
	else if (j * j == i)
	{
		return (j);
	}
	else
	{
		return (assist(i, j + 1));
	}
	return (1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be evaluated
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (assist(n, 1));
}
