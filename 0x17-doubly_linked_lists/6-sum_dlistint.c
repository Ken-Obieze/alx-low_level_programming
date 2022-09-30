#include "lists.h"

/** 
 * sum_dlistint - summs all data ina list
 * @head: pointer to list
 * Return: sum of data or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
