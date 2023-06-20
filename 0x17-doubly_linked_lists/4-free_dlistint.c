#include "lists.h"

/**
 * free_dlistint - A dlistint_t list is freed.
 * @head: Points to the doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
