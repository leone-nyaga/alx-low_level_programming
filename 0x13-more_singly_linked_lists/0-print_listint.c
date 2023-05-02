#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: linked list to be printed
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t k = 0, num;

	while (h)
	{
		printf("%d\n", h->n);
		k++;
		h = h->next;
	}

	num = k;

	return (num);
}
