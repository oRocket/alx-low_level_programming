#include "main.h"
/**
 * print_array - print elements of any array of int.
 * @n: number of elements of the array
 * @a: pointer parameter
 */
void print_array(int *a, int n)
{
	int j;

	j = 0;
	for (; j < n; j++)
	{
		printf("%d", *(a + j));
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
