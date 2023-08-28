#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node
 * at a given index in a listint_t linked list.
 * @head: A pointer to the pointer to the head of the linked list.
 * @index: The index of the node to be deleted.
 * Return: 1 if successful, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *prev;

	if (head == NULL || *head == NULL)
		return (-1);

	prev = NULL;

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; temp != NULL && i < index; i++)
	{
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL)
		return (-1);

	prev->next = temp->next;
	free(temp);

	return (1);
}
