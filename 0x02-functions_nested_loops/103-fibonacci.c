#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * Return: 0 (success)
 */
int main(void)
{
	int c;
	long int a;
	long int b;
	long int sum;

	c = 0;
	a = 1;
	b = a;
	sum = a + b;

	while (sum < 4000000)
	{
		if (sum % 2 == 0)
		{
			c += sum;
		}
		a = b;
		b = sum;
		sum = a + b;
	}
	printf("%i\n", c);
	return (0);
}
