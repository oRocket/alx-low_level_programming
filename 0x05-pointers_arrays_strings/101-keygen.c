#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int p; /* password */
	int sum = 0;

	srand(time(NULL));
	while (sum <= 2645)
	{
		p = (rand() % 128);
		sum += p;
		printf("%c", p);
	}
	printf("%c", 2772 - sum);
	return (0);
}
