#include "lists.h"

/**
 * add_nodeint - helps to adds a new node
 * @head: position of the first node
 * @y: integer to insert in that new node
 * Return: pointer to new node, or NULL should it fail
 */
listint_t *add_nodeint(listint_t **head, const int y)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->y = y;
	new->next = *head;
	*head = new;

	return (new);
}
