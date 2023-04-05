#include "lists.h"

/**
 * free_listint_safe - frees a linked list safely
 * @h: the first node in the linked list
 * Return: print number of elements
 */
size_t free_listint_safe(listint_t **h)
{
	size_t width = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*i);
			*h = temp;
			width++;
		}
		else
		{
			free(*h);
			*h = NULL;
			width++;
			break;
		}
	}
	*h = NULL;
	return (width);
}
