#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given position in a dlistint_t linked list.
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @index: The index of the node to be deleted. Index starts at 0.
 *
 * Return: 1 if the deletion succeeded, or -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = *head;

    if (*head == NULL)
        return -1;

    if (index == 0)
    {
        *head = current->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return 1;
    }

    for (unsigned int i = 0; current != NULL && i < index; i++)
        current = current->next;

    if (current == NULL)
        return -1;

    current->prev->next = current->next;
    if (current->next != NULL)
        current->next->prev = current->prev;

    free(current);
    return 1;
}
