#include "lists.h"
/**
 * print_list - Prints the elements of a linked list
 * @h: Pointer to the head of the linked list
 * Return: Number of nodes in the linked list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", current->len, current->str);

		current = current->next;
		count++;
	}

	return (count);
}
