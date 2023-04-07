#include "lists.h"

/**
 * free_dlistint - function that frees the list
 * @head: a pointer to the head this list
 */

void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_dlistint(head->next);

		free(head);
	}
}
