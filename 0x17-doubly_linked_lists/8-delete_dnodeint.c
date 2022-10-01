#include "lists.h"

/**
 * delete_dnodeint_at_index - delete element at index
 * @head: pointer to list
 * @index: position of data to purge
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;

	dlistint_t *temp = *head;

	if (*head == NULL || dlistint_len(temp) < index + 1)
		return (-1);

	if (!index)
	{
		(*head) = temp->next;
		if (temp->next)
			temp->next->prev = NULL;
		temp->next = NULL;
		free(temp);
		return (1);
	}

	while (i < index)
	{
		temp = temp ->next;
		i++;
	}

	temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);

	return (1);
}
