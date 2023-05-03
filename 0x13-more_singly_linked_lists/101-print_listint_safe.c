#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head node
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *k = head;
	const listint_t *j = NULL;
	size_t count = 0;

	while (k != NULL)
	{
		printf("[%p] %d\n", (void *)k, k->n);
		count++;
		j = k;
		k = k->next;

		if (k >= j)
		{
			printf("-> [%p] %d\n", (void *)k, k->n);
			break;
		}
	}
	return (count);
}
