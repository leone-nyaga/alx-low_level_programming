#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: a pointer to a pointer to the head node
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *k;
	listint_t *j;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	k = *h;
	while (k != NULL)
	{
		count++;
		j = k;
		k = k->next;
		free(j);
		if (j <= k)
			break;
	}
	*h = NULL;
	return (count);
}
