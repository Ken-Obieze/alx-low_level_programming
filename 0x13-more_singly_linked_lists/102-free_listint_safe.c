#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to first node.
 * Return: the size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	int len = 0;
	int gap;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		gap = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;
	return (len);
}
