#include "lists.h"
/**
 * free_listint - Frees a linked list of type listint_t.
 * @head: A pointer to the head of the linked list.
 * Return: no return.
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
