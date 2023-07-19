#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int c; /*defining variable counter*/
	int ct; /*defining variable count to*/
	long a;
	long b;

	ct = 50;
	a = 1;
	b = 2;

	for (c = 1; c <= (ct / 2); c++)
	{
		printf("%li %li ", a, b);
		a += b;
		b += a;
	}
	if (ct % 2 == 1)
		printf("%li", a);

	printf("\n");

	return (0);
}


