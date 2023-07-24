#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string to print
 * Return: nothing
 */
void puts_half(char *str)
{
	int c;/*count*/
	int j;

	c = 0;

	while (c >= 0)
	{
		if (str[c] == '\0')
			break;
		c++;
	}
	if (c % 2 == 1)
		j = c / 2;
	else
		j = (c - 1) / 2;

	for (j++; j < c; j++)
		_putchar(str[j]);
	_putchar('\n');
}
