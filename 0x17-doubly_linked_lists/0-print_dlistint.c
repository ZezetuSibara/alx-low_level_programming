#include "lists.h"

/**
 * print_dlistint - Used to print all the elements.
 * @h: Pointsthe doubly linked list.
 * Return: The nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
