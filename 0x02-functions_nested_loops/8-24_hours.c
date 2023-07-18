#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Always 0 (success)
 */
void jack_bauer(void)
{
	int h = 0; /*hour variable definition*/
	int m = 0; /*definition of minute variable*/

	while (h < 24)
	{
		while (m < 60)
		{
			_putchar('0' + (h / 10));
			_putchar('0' + (h % 10));
			_putchar(':');
			_putchar('0' + (m / 10));
			_putchar('0' + (m % 10));
			_putchar('\n');
			m++;
		}
		m = 0;
		h++;
	}
}
