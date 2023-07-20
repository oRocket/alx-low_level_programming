#include "main.h"
/**
 * more_numbers - prints 10x the numbers.
 * Return: Always 0 success
 */
void more_numbers(void)
{
	int c;
	int d;

	for (c = 1; c <= 10; c++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d / 10 > 0)
			{
				_putchar(d / 10 + '0');
			}
			_putchar((d % 10) + '0');
		}
		_putchar('\n');
	}
}

