#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: integer 1 to be reverse
 * @n: integer 2 to be reverse
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		int temp = a[i];

		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
