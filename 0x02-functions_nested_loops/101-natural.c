#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiples
 *Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum += n;
		}
	}
	printf("%i\n", sum);
	return (0);
}
