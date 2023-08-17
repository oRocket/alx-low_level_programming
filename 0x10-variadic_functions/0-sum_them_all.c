#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameters passed to the function.
 * Return: sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list add_all;
	unsigned int a;
	int sum = 0;

	va_start(add_all, n);

	for (a = 0; a < n; a++)
		sum = sum + va_arg(add_all, int);

	va_end(add_all);

	return (sum);
}

