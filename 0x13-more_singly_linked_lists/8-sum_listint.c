#include "lists.h"

/**
 * sum_listint - returns sum of all the data (n) of a listint_t linked list.
 * @head: pointer to the first node of listint_t list.
 * Return: sum of items in list, if the list is empty, return 0.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
