#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints strings followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 * ...: The variable arguments representing the strings.
 * If separator is NULL, it is not printed.
 * If a string is NULL, "(nil)" is printed instead.
 * A new line is printed at the end.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list my_strings;
	unsigned int a;
	char *str;

	va_start(my_strings, n);

	for (a = 0; a < n; ++a)
	{
		str = va_arg(my_strings, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (a < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(my_strings);
}
