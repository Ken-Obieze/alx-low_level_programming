#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: a pointer to the first node of the reversed list.
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	int num = 0;
	long int gap;

	while (head)
	{
		gap = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (gap > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (num);
}
