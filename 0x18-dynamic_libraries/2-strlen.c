#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: character for argument.
 * Return: string length.
 */
int _strlen(char *s)
{
	int c; /*defining variable count(c) */

	c = 0;
	while (*(s + c) != '\0')
		c++;
	return (c);
}
