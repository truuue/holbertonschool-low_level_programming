#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		s++;
		h = h->next;
	}
	return (count);
}
