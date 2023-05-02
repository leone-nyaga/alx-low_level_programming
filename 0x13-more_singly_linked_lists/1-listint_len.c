#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: linked list to be printed
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t k = 0, num;

	while (h)
	{
		k++;
		h = h->next;
	}

	num = k;
	return (num);
}
