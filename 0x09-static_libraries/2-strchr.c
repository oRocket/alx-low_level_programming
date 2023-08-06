#include "main.h"
#include <stdio.h>
/**
 * *_strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: c if the character is found or otherwise NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
