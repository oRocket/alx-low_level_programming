#include <stdio.h>
/**
 * main - Entry point
 * Description - print single digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int d = 0;

	while (d < 10)
	{
		printf("%d", d); /*print digit numbers less than 10*/
		d++;
	}
	putchar('\n');
	return (0);
}
