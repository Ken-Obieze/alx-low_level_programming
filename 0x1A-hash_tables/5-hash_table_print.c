#include "hash_tables.h"

/**
 * hash_table_print- function that prints a hash table.
 * @ht: hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *item;
	char *sep = "";

	if (!ht || !ht->array)
		return;

	putchar('{');
	for (index = 0; index < ht->size; index++)
	{
		item = ((ht->array)[index]);
		while (item)
		{
			printf("%s'%s': '%s'", sep, item->key, item->value);
			sep = ", ";
			item = item->next;
		}
	}
	putchar('}');
}
