#include "main.h"
/**
 * print_alphabet- printing lowercase alphabet
 *
 * Return 0 (Success)
 */
void print_alphabet(void) /*prototype for printing*/
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
