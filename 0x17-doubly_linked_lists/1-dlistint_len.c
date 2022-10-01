#include "lists.h"

/**
 * dlistint_len -  return number of elementsin a list
 * @h: pointer to the list
 * Return:number of element in a list
 */


size_t dlistint_len(const dlistint_t *h)
{
	size_t nodeCount = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		nodeCount++;
	}
	return (nodeCount);
}
