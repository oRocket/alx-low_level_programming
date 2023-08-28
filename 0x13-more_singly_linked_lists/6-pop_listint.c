#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * and returns its data.
 * @head: A pointer to the pointer to the head of the linked list.
 * Return: 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n = temp->n;

	if (head == NULL || *head == NULL)
	{
		return (0); /* Return 0 if the list is empty */
	}

	*head = (*head)->next;
	free(temp);

	return (n);
}
