#include <stdio.h>
/**
 * main - Entry point
 * Description: print all numbers of base 16 in lowercase
 * Return: 0 always (success)
 */
int main(void)
{
	int d = '0';
	int a_f = 'a';

	while (d <= '9')
	{
		putchar(d); /*print number 0 to 9*/
		d++;
	}

	while (a_f <= 'f')
	{
		putchar(a_f); /*print lowcase alphabets a to f*/
		a_f++;
	}
	putchar('\n');
	return (0);
}
