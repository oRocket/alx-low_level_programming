#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: A double pointer to the head node of the linked list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *next;
	size_t size = 0;

	if (!h || !*h)
		return (0);

	while (current)
	{
		size++;
		next = current->next;
		free(current);
		current = next;

		if (current == *h)
		{
			*h = NULL;
			break;
		}
	}

	return (size);
}
