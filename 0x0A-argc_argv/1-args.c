#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: count for argument
 * @argv: vector for argument
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
