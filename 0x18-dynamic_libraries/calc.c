#include <stdio.h>

/**
 * add - Add two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The sum of a and b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtract two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The result of a - b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiply two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The product of a and b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divide two integers
 * @a: The dividend
 * @b: The divisor
 *
 * Return: The result of the division
 */
int div(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Division by zero\n");
		return (0);
	}
	return (a / b);
}

/**
 * mod - Compute the modulo of two integers
 * @a: The dividend
 * @b: The divisor
 *
 * Return: The remainder of the division a % b
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Modulo by zero\n");
		return (0);
	}
	return (a % b);
}
