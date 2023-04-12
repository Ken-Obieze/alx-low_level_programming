#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: key ahich cannot be empty
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item = (hash_node_t *) malloc(sizeof(hash_node_t));
	char *value_cp;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	value_cp = stup(value);
	if (value_cp == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_cp;
			return (1);
		}
	}

	if (!item)
	{
		free(value_cp);
	}
	item->key = stup(key);
	if (!item->key)
	{
		free(item);
		return (0);
	}
	item->value = value_cp;
	item->next = ht->array[index];
	ht->array[index] = item;

	return (1);
}

/**
 * stup - handles memory allocation
 * @src: vslue to create memory for
 * Return: NULL if error occures or pointer to memory.
 */

char *stup(const char *src)
{
	char *dst = (char *) malloc(strlen(src) + 1);

	if (dst == NULL)
		return (NULL);
	strcpy(dst, src);
	return (dst);
}
