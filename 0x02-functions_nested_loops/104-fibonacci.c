#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers
 * Return: 0 (success)
 */
int main(void)
{
	int c = 2;
	float a = 1;
	float b = a + 1;
	float d = a + b;

	printf("%f, ", a);
	printf("%f, ", b);

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
