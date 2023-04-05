#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - number of unique nodes
 * in a looped linked list.
 * @head: A pointer to the head to check.
 * Return: 0 if the list is not looped
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *dog, *cat;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	dog = head->next;
	cat = (head->next)->next;

	while (cat)
	{
		if (dog == cat)
		{
			dog = head;
				while (dog != cat)
			{
				nodes++;
				dog = dog->next;
				cat = cat->next;
			}
			dog = dog->next;

			while (dog != cat)
			{
				nodes++;
				dog = dog->next;
			}
			return (nodes);
		}
		dog = dog->next;
		cat = (cat->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a list safely.
 * @head: A pointer to the list head.
 * Return: The number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
