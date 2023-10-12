#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node
 * at a given position in the list
 * @h: A pointer to a pointer to the head of the list
 * @idx: The index where the new node should be added, starting from 0
 * @n: The value to be stored in the new node
 *
 * Return: The address of the new node, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	current = *h;
	while (current != NULL)
	{
		if (i == idx - 1)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);

			new_node->n = n;
			new_node->next = current->next;
			new_node->prev = current;
			current->next = new_node;
			if (new_node->next != NULL)
				new_node->next->prev = new_node;

			return (new_node);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
