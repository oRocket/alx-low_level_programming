#include "main.h"
#include <stdio.h>
/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: bytes in the string
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (&s[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
