#include <stdio.h>
/**
 * main - finds and prints the largest prime factor
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long n = 612852475143; /*number*/
	unsigned long d = 2; /*divisor*/

	while (d < n)
	{
		if (n % d == 0)
		{
			n /= d;
			d = 2;
		}
		else
			d++;
	}
	printf("%lu\n", n);
	return (0);
}
