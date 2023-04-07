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
        dlistint_t *tmpa = *h;
        dlistint_t *tmpb = NULL;
        dlistint_t *newnode = malloc(sizeof(dlistint_t));

        if (newnode == NULL)
        {
                free(newnode);
                return (NULL);
        }

        if (*h == NULL && idx != 0)
                return (NULL);

        if (idx == 0)
                return (add_dnodeint(h, n));

        while (idx != 1)
        {
                if (tmpa->next == NULL)
                {
                        free(newnode);
                        return (NULL);
                }
                tmpa = tmpa->next;
                idx--;
        }

        if (tmpa->next == NULL)
                return (add_dnodeint_end(h, n));

        tmpb = tmp->next;
        tmpa->next = newnode;
        tmpb->prev = newnode;
        newnode->n = n;
        newnode->prev = tmpa;
        newnode->next = tmpb;

        return (newnode);
}
