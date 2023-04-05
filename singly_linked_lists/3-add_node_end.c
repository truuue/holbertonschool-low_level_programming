#include "lists.h"

/**
 * add_node_end - function that adds a new node to the end of list
 *@head: a pointer to pointer to the head list
 *@str: string pointer
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *oldnode = *head;
	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->str = strdup(str);
	newnode->len = len(str);
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}
	while (oldnode->next != NULL)
		oldnode = oldnode->next;

	oldnode->next = newnode;
	return (newnode);
}
