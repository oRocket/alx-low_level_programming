#include "lists.h"
/**
 * free_listint_safe - frees a linked list.
 * @h: Pointer to the pointer of the first node in the linked list.
 * Return: Number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t elements_freed = 0;
	int diff;
	listint_t *current;

	if (!h || !*h)
		return (0);

	for (; *h != NULL; elements_freed++)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			current = (*h)->next;
			free(*h);
			*h = current;
		}
		else
		{
			free(*h);
			*h = NULL;
			break;
		}
	}

	return (elements_freed);
}
