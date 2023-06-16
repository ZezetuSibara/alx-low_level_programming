#ifndef LINKED
#define LINKED

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
        char *str;
        unsigned int len;
        struct list_s *next;
}
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int sum_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
void free_dlistint(dlistint_t *head);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
size_t dlistint_len(const dlistint_t *h);
size_t print_dlistint(const dlistint_t *h);

#endif /*LINKED*/
