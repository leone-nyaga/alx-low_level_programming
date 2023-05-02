#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the first node of the list
 */

void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
