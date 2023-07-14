#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Program assigning a random number to the variable n.
 * Return: Always 0 (success)
 */
int main(void)
{
int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("%i is greater than 5\n", n);
	}
	else if ((n % 10) == 0)
	{
		printf("%i is 0\n", n);
	}
	else if (((n % 10) < 6) && ((n % 10) != 0))
	{
		printf("%i is less than 6 and not 0\n", n);
	}

	return (0);
}
