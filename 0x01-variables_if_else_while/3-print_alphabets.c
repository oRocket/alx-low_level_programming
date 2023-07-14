#include <stdio.h>
/**
 * main - Entry point
 * description: using putchar to print lowercase and uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char low_c = 'a';
	char upp_c = 'A';

	while (low_c <= 'z')
	{
		putchar(low_c); /*printing lowercases from a-z*/
		low_c++;
	}
	while (upp_c <= 'Z')
	{
		putchar(upp_c); /*printing uppercases from A-Z*/
		upp_c++;
	}
	putchar('\n');
	return (0);
}
