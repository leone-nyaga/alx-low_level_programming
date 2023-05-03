#include "lists.h"
#include <stdlib.h>

/**
 * looped_listint_len - counting numbers of nodes in
 * a listint_t linked list
 * @head: pointer to the head of the list
 * Return: number of unique nodes, or 0 if list is not looped
 */

size_t looped_listint_len(const listint_t *head)
{
	size_t b = 1;
	const listint_t *r;
	const listint_t *t;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}

	r = head->next;
	t = (head->next)->next;

	while (t)
	{
		if (r == t)
		{
			r = head;
			while (r != t)
			{
				b++;
				r = r->next;
				t = t->next;
			}
			r = r->next;

			while (r != t)
			{
				b++;
				r = r->next;
			}
			return (b);
		}
		r = r->next;
		t = (t->next)->next;
	}
	return (0);
}


/**
 * print_listint_safe -  prints a listint_t linked list
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t b = looped_listint_len(head);
	size_t index = 0;

	if (b == 0)
	{
		for (; head != NULL; b++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < b; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p] %d\n", (void *)head, head->n);
	}
	return (b);
}
