#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a listint_t linked list
 * @index: index of node to be deleted
 * @head: pointer to the pointer tothe head of the list
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *k = *head;
	listint_t *j = NULL;
	unsigned int l;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(k);
		return (1);
	}

	for (l = 0; l < index && k != NULL; l++)
	{
		j = k;
		k = k->next;
	}

	if (k == NULL)
		return (-1);

	j->next = k->next;
	free(k);

	return (1);
}
