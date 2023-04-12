#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *item, *temp;
	unsigned long int index;

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			item = ht->array[index];
			while (item)
			{
				temp = item->next;
				free(item->key);
				free(item->value);
				free(item);
				item = temp;
			}
		}
	}

	free(ht->array);
	free(ht);
}
