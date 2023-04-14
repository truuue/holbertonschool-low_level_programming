#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: is the hash table
 * If ht is NULL, don’t print anything
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int x = 0;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	printf("{");

	while (i < ht->size)
	{
		temp = ht->array[i];
		if (temp != NULL)
		{
			if (x == 1)
				printf(", ");

			printf("'%s': '%s'", temp->key, temp->value);
			while ((temp = temp->next) != NULL)
			{
				printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
			}
			x = 1;
		}
		i++;
	}
	printf("}\n");
}
