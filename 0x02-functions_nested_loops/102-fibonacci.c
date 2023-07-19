#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int c; /*defining variable counter*/
	long a;
	long b;
	long c;

	c = 2
	a = 1;
	b = a + 1;
	c = a + b;

	printf("%ld, %ld, ", a, b);
	while (c < 50)
	{
		printf("%ld", c);
		c++;
		a = b;
		b = c;
		c = a + b;
		if (c < 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}


