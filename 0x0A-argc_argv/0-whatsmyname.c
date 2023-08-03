#include <stdio.h>
/**
 * main - prints a program's name
 * @argc: count for argument
 * @argv: vector for argument
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
