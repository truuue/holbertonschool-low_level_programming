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
	dlistint_t *tmp = *h;
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	dlistint_t *tmp2 = NULL;

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if (*h == NULL && idx != 0)
		return (NULL);

	if (idx == 0)
	{
		add_dnodeint(h, n);
		return (*h);
	}

	while (idx > 1)
	{
		tmp = tmp->next;
		if (tmp == NULL)
		{
			free(newnode);
			return (NULL);
		}
		idx--;
	}

	if (tmp->next == NULL)
	{
		add_dnodeint_end(h, n);
		return ((*h)->prev);
	}

	tmp2 = tmp->next;
	tmp->next = newnode;
	newnode->prev = tmp;
	newnode->next = tmp2;
	tmp2->prev = newnode;

	return (newnode);
}
