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
	dlistint_t *temp = *h;
	dlistint_t *temp2 = NULL;
	dlistint_t *newnode = NULL;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		temp = temp->next;
		if (!temp)
		{
			free(newnode);
			return (NULL);
		}
		idx--;
	}
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	temp2 = temp->next;
	temp->next = newnode;
	temp2->prev = newnode;
	newnode->next = temp2;
	newnode->prev = temp;

	return (newnode);
}
