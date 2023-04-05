#include "lists.h"

/**
 * print_listint - prints all the elements from linked list
 * @h: a linked list to be printed
 * Return: number of nodes to be returned
 */
size_t print_listint(const listint_t *h)
{
	size_t y= 0;

	while (h)
	{
		printf("%d\n", h->n);
		y++;
	h = h->next;
	}
	return (y);
}
