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
	while (str[c] != '\0')
	{
		if (c % 2 == 0)
			_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
