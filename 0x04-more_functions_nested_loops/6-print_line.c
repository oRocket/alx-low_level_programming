#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times for argument
 * Return: 0 success
 */
void print_line(int n)
{
	int t;

	t = 1;

	while (t <= n)
	{
		_putchar(95);
		t++;
	}
	_putchar('\n');
}
