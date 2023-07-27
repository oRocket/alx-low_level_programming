#include "main.h"
/**
 * *leet - encodes a string into 1337
 * @str: string for argument
 * Return: str
 */
char *leet(char *str)
{
	char *leet = "aAeEoOtTlL";
	char *code = "4433007711";
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		j = 0;
		while (leet[j] != '\0')
		{
			if (str[i] == leet[j])
				str[i] = code[j];
			j++;
		}
		i++;
	}
	return (str);
}
