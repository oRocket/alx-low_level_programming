#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of a linked list.
 * @head: A pointer to the pointer to the head of the linked list.
 * @n: The value to be added to the new node.
 * Return: The address of the new node, or NULL if memory allocation fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL); /* Return NULL if memory allocation fails */
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}

	return (new_node);
}
