#include "lists.h"

/**
 * add_dnodeint - A new node is added at the beginning.
 * @head: Points to the head of the doubly linked list.
 * @n: The value of the new node.
 * Return: The new element address, or NULL if it fails.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
