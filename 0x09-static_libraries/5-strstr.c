#include "main.h"
#include <stdio.h>
/**
 * *_strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}
