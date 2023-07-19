#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * Return: 0 (success)
 */
int main(void)
{
	int sum_evens;
	int a;
	int b;
	int sum;

	sum_evens = 0;
	sum = 1;

	while (b < 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;
		if ((sum <= 4000000) && (sum % 2 == 0))
			sum_evens = sum_evens + sum;
	}
	printf("%i\n", sum_evens);
	return (0);
}
