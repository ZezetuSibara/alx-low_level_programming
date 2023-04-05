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

	if (!i || !*i)
		return (0);

	while (*i)
	{
		diff = *i - (*i)->next;
		if (diff > 0)
		{
			temp = (*i)->next;
			free(*i);
			*i = temp;
			width++;
		}
		else
		{
			free(*i);
			*i = NULL;
			width++;
			break;
		}
	}
	*i = NULL;
	return (width);
}
