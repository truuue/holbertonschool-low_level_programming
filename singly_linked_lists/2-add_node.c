#include "lists.h"

/**
 * add_node - function that adds a new node to list
 * @head: pointer to pointer to head in the list
 * @str: string pointer
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;

	*head = new;

	return (*head);
}
