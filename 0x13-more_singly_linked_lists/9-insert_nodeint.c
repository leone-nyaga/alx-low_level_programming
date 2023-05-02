#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @idx: index of the list where the new node should be added
 * @head: pointer to a pointer of the node
 * @n: value to be stored
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *k, *j;
	unsigned int l;

	if (!head)
		return (NULL);

	k = malloc(sizeof(listint_t));
	if (!k)
		return (NULL);
	k->n = n;

	if (idx == 0 || !*head)
	{
		k->next = *head;
		*head = k;
		return (k);
	}

	j = *head;
	for (l = 0; l < idx - 1 && j; l++)
		j = j->next;

	if (l < idx - 1 || !j)
	{
		free(k);
		return (NULL);
	}

	k->next = j->next;
	j->next = k;

	return (k);
}
