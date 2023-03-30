#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the first node of listint_t list.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	head = NULL;
}
