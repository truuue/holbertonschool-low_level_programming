#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data to assign the new node
 * Return: the address of the new node, or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *node;
    unsigned int i;

    if (h == NULL)
        return (NULL);

    if (idx == 0)
        return (add_dnodeint(h, n));

    node = *h;

    for (i = 0; node != NULL && i < idx - 1; i++)
        node = node->next;

    if (node == NULL || node->next == NULL)
        return (NULL);

    dlistint_t *newnode = malloc(sizeof(dlistint_t));

    if (node == NULL)
        return (NULL);

    node->n = n;
    node->prev = node;
    node->next = node->next;
    node->next->prev = node;
    node->next = node;

    return (node);
}
