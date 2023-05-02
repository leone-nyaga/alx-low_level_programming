#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list
 * @head: pointer to the head of the list
 * Return: the sum of all data or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *k = head;

	while (k != NULL)
	{
		sum += k->n;
		k = k->next;
	}

	return (sum);
}
