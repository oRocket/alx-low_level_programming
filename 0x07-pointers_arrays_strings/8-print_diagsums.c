#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: input pointer
 * @size: matrix of integer
 * Return: no return
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1;
	int sum2;

	i = 0;
	j = 0;
	sum1 = 0;
	sum2 = 0;

	while (i < size)
	{
		sum1 += *(a + i * size + j + i);
		sum2 += *(a + i * size + size - j - 1);
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
