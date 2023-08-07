#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	result = malloc(strlen(s1) + strlen(s2) + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	while (s1[i] != '\0')
	{
		result[j] = s1[i];
		i++;
		j++;
	}

	i = 0;

	while (s2[i] != '\0')
	{
		result[j] = s2[i];
		i++;
		j++;
	}

	result[j] = '\0';

	return (result);
}
