#include "lists.h"

/**
 * print_dlistint - prints all element of a list
 * @h: pointer to doubly linked list
 * Return: Number of node in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int nodeCount = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeCount++;
	}
	return (nodeCount);
}
