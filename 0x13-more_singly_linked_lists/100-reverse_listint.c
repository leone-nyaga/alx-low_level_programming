#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the pointer to the head of the list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *j = NULL, *k = NULL;

	while (*head)
	{
		k = (*head)->next;
		(*head)->next = j;
		j = *head;
		*head = k;
	}

	return (j);
}
