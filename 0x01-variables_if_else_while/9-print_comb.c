#include <stdio.h>
/**
 * main - Entry point
 * description: using putchar to print all possible combinatn of digit numbs
 * Return: Always 0 (success)
 */
int main(void)
{
	int d = '0';

	while (d <= '9')
	{
		putchar(d); /*print digit numbers less than 9*/
		if (d != '9')
		{
			putchar(','); /*print commas of digit numbers are not equal to 9*/
			putchar(' '); /*print empty space if digit numbers are not equal to 9*/
		}
		d++;
	}
	putchar('\n');
	return (0);
}
