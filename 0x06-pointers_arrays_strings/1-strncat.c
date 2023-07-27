#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: integer for argument
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
