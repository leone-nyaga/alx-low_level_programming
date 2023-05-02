#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked
 *  list, and returns the head node’s data (n)
 *  @head: pointer to the elements
 *  Return: node's data or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *k;
	int n;

	if (*head == NULL)
		return (0);

	k = *head;
	n = k->n;
	*head = (*head)->next;
	free(k);

	return (n);
}

