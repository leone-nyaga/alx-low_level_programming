#include "lists.h"

/**
 * get_nodeint - returns the nth node of a listint_t linked list
 * @index: index of node to be returned
 * @head: pointer to the head of the list
 * Return: pointer to the node at the specified index,
 * or nullif the node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;
	listint_t *k = head;

	for (j = 0; j < index && k != NULL; j++)
		k = k->next;

	return (k == NULL ? NULL : k);
}
