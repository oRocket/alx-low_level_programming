#include <stdio.h>
/**
 * main - Entry point
 * description - printing all possible different combinationsof 2 digits
 * return - Always 0 (success)
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (c = '0'; c <= '9'; c++)
	{
	for (b = (c + 1); b <= '9'; c++)
	{
	for (a = (b + 1); a <= '9'; a++)
	{
	putchar(c);
	putchar(b);
	putchar(a);
	if (c != '7' || b != '8' || a != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
