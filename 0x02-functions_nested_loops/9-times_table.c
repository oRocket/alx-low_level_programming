#include "main.h"
/**
 * times_table - prints the 9 times table.
 *
 * Return: Always 0 (success)
 */
void times_table(void)
{
	int r; /*definition of row variable*/
	int c; /*definition of column variable*/
	int p; /*definition of product variable*/

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
		p = (r * c);

		if (c == 0)
		{
		_putchar('0' + p);
		}
		else if (p <= 9)
		{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + p);
		}
		else if (p > 9)
		{
		_putchar(',');
		_putchar(' ');
		_putchar('0' + (p / 10));
		_putchar('0' + (p % 10));
		}
		}
	_putchar('\n');
	}
}

