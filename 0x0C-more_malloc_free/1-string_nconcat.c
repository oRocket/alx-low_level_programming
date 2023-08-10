#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * @n: number of bytes to concatenate from s2.
 * Return: pointer to the concatenated string or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	p = malloc(sizeof(char) * (len1 + n + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (i = 0; i < n; i++)
		p[len1 + i] = s2[i];
	p[len1 + n] = '\0';

	return (p);
}

