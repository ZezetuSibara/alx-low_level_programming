#include "lists.h"

/**
 * dlistint_len - The number of elements are returned.
 * @h: A pointer to the head of the doubly linked list.
 * Return: The elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
