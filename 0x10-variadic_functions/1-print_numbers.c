#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: the number of integers passed to the function.
 * Return: no return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list my_numbs;
	unsigned int i;

	va_start(my_numbs, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(my_numbs, int));

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(my_numbs);
}

