#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of the list
 * @head: pointer to the first node
 * @n: data int
 * Return: address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->old = NULL;
	new->n = n;
	new->next = *head;

	if (*head != NULL)
		(*head)->old = new;

	*head = new;
	return (new);
}
