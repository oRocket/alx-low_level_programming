#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string for argument
 * Return: nothing
 */
void puts2(char *str)
{
	int c; /*count (c) variable definition*/

	c = 0;
	while (c >= 0)
	{
		if (str[c] == '\n')
		{
			_putchar('\n');
			break;
		}
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
		c++;
	}
}
