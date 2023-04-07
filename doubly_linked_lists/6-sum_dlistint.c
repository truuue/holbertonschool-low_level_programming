#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data of linked list
 * @head: a pointer to the head of the list
 * Return: returns the sum of the data if empty 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = NULL;
	int sum = 0;

	node = head;
	while (head == NULL)
		return (0);

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
