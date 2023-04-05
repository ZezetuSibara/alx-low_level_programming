#include "lists.h"

/**
 * listint_len - collects the number of elements
 * @h: linked list to be printed
 * Return: number of nodes to be returned
 */
size_t listint_len(const listint_t *h)
{
	size_t y = 0;

	while (h)
	{
		y++;
		h = h->next;
	}

	return (y);
}
