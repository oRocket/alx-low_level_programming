#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly linked list
 * @h: A pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		/* Print the value of the current node */
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
