#include "lists.h"
/**
 * free_listint2 - Frees a linked list of type listint_t
 * and sets the head to NULL.
 * @head: A pointer to the pointer to the head of the linked list.
 * Return: no return.ccessible or valid.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
