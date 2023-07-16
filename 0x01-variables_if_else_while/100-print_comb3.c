#include <stdio.h>
/**
 * main - Entry point
 * description - printing all possible different combinationsof 2 digits
 * return - Always 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
	for (j = i + 1; j <= 9; j++)
	{
		putchar('0' + i);
		putchar('0' + j);
		putchar(',');
	}
	}
	putchar('0' + i);
	putchar('0' + j);
	return (0);
}
