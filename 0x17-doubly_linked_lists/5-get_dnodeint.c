#include "lists.h"

/**
 * get_dnodeint_at_index: return nth node of list
 * @head: pointer to list
 * @index: index of node to retrieve
 * Return: address to node or NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int i = 0;

	if (head == NULL)
		return (NULL);

	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	return (head?head:NULL);
}
