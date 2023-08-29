#include "lists.h"
/**
 * find_listint_loop - Finds the start node of a loop in a linked list.
 * @head: Pointer to the head of the linked list.
 * Return: Address of the node where the loop starts,
 * or NULL if no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_runner = head;
	listint_t *fast_runner = head;

	if (!head)
		return (NULL);

	do

	{
		if (!fast_runner || !fast_runner->next)
			return (NULL);

		fast_runner = fast_runner->next->next;
		slow_runner = slow_runner->next;

	}

	while (slow_runner != fast_runner);

	slow_runner = head;
	while (slow_runner != fast_runner)
	{
		slow_runner = slow_runner->next;
		fast_runner = fast_runner->next;
	}

	return (fast_runner);
}
