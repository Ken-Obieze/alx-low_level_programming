#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at given position
 * @h: pointer to node
 * @idx: position to insert
 * @n: data to insert
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *newNode;
	dlistint_t*temp = *h;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode || !h)
		return (NULL);

	newNode-> = n;
	newNode->next = NULL;

	if (idx == 0)
		return(add_dnodeint(h, n));

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			if (temp->next == NULL)
				return (add_dnodeint_end(h, n));
			newNode->next = temp->next;
			newNode->prev = temp;
			temp->next->prev = newNode;
			temp->next = newNode;
			teturn (newNode);
			return (newNode);
		} else
			temp = temp->next;
	}
	return (NULL)
}
