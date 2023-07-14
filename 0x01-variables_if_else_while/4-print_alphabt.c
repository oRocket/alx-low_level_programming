#include <stdio.h>
/**
 * main - Entry point
 * Description: print lowercase alphabets except q and e
 * Return: Always 0 (success)
 */
int main(void)
{
	char low_c = 'a';

	while (low_c <= 'z')
	{
		if ((low_c != 'e') && (low_c != 'q'))
		{
			putchar(low_c);
		}
		low_c++;
	}
	putchar('\n');
	return (0);
}
