#include "lists.h"

/**
 * print_message_before_main - Prints a message before the main function
 * is executed.
 */
void __attribute__((constructor)) print_message_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
