#include "lists.h"

/**
 * get_dnodeint_at_index - Acertain node will be returned.
 * @head: Points to the doubly linked list.
 * @index: An index starting from 0.
 * Return: The specified node of the list, or NULL if there is no node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
