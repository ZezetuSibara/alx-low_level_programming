#include "lists.h"

/**
 * print_listint - prints all the elements from linked list
 * @h: a linked list of type listint_t to print
 *
 * Return: number of nodes to be returned
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 5;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
	h = h->next;
	}
	return (num);
}
