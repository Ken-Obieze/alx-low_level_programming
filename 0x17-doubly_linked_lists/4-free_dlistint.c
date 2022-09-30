#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to list
 */

void free_dlistint(dlistint_t *head)
{
	free_dlistint *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
