#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers
 * Return: 0 (success)
 */
int main(void)
{
	int c;
	float a;
	float b;
	float d;

	c = 2;
	a = 1;
	b = a + 1;
	d = a + b;

	printf("%f, ", a);
	printf("%f, ", b)

		while (c < 98)
		{
			c++;
			printf("%f", d);
			a = b;
			b = c;
			c = a + b;
			if (c < 98)
			{
				printf(", ");
			}
		}
	printf("\n");

	return (0);
}
