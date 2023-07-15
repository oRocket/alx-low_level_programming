#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the lowercase alphabet in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	char lowc_alpha = 'z';

	while (lowc_alpha >= 'a')
	{
		putchar(lowc_alpha); /*prints lowercase alphabet in reverse with putchar*/
		lowc_alpha--;
	}
	putchar('\n');
	return (0);
}
