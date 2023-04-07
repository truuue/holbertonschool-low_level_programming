#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: a pointer to the head of the list
 * @index: the index of the node
 * Return: node or if does not exist NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = NULL;
	unsigned int count = 0;

	node = head;
	while (head == NULL)
		return (NULL);

	while (index != count)
	{
		if (node == NULL)
			return (NULL);

		node = node->next;
		count++;
	}
	return (node);
}
