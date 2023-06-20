#include "lists.h"

/**
 * sum_dlistint - The sum of all the data is returned.
 * @head: PointS to the doubly linked list.
 * Return: The total of the data (n), or 0 if there is none.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
