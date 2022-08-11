#include "lists.h"

/**
 * free_list - frees memory allocated to a linked list
 * @head: double pointer to list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
