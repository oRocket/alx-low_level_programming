#include <stdio.h>
/**
 * main - Entry point
 * Description: print single digit numbers of base 10
 * Return: Always 0 (success)
 */
int main(void)
{
	int d = '0';

	while (d <= '9')
	{
		putchar(d); /*print all single digit numbers with putchar*/
		d++;
	}
	putchar('\n');
	return (0);
}
