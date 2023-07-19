#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int c;
	int ct;
	long a = 1;
	long b = 2;

	ct = 50;
	a = 1;
	b = 2;

	for (c = 1; c <= 50; c++)
	{
		printf("%li, %li, ", a, b);
		a += b;
		b += a;
	}
		if (ct % 2 == 1)
			printf("%li, ", a);
		printf("\n");

		return (0);
}


