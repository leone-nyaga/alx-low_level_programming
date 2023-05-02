#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *k = 0;

	if (head == NULL)
		return;
	 while (*head)
	 {
		 k = (*head)->next;
		 free(*head);
		 *head = k;
	 }

	 *head = (NULL);
}
