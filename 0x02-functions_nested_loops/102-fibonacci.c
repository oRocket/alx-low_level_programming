#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	long int c, a, b, n; /*defining variable counter*/

	a = 1;
	
	b = 2;

	for (c = 1; c <= 50; ++c)
	{
		if (a != 20365011074)
		{
			printf("%ld, ", a);
		}
		else
		{
			printf("%ld\n", a);
		}
		n = a + b;
		a = b;
		b = n;
	}
}


