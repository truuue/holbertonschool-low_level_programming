#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of the list
 * @head: double pointer to the head this list
 * @n: data to assign the new node
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = *head;
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		free (newnode);
		return (NULL);
	}

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if (node == NULL)
		*head = newnode;

	else
	{
		while (node->next != NULL)
			node = node->next;

		newnode->prev = node;
		node->next = newnode;
	}
	return (newNode);
}
