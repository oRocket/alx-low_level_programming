#include "main.h"
/**
 * print_alphabet_x10 - prints 10x the alphabet
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void) /*prototype*/
{
	char alp; /*defining variable*/
	int num;

	for (num = 1; num < 11; num++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}
