#include "lists.h"

/**
 * add_dnodeint - adds new node to beginning of list
 * @head: pointer to list
 * @n: data to inser into list
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (*head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

	(*head)->prev = newNode;

	*head = newNode;

	return (newNode);
}
