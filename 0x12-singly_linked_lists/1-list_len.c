#include "lists.h"

/**
 * list_len - return number of element in a list
 * @h: pointer to list
 * Return: number of element
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
