#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head of the list
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *k;
	listint_t *j;

	if (head == NULL)
		return (NULL);

	k = head;
	j = head;

	while (j != NULL && j->next != NULL)
	{
		k = k->next;
		j = j->next->next;

		if (k == j)
		{
			k = head;

			while (k != j)
			{
				k = k->next;
				j = j->next;
			}
			return (k);
		}
	}
	return (NULL);
}
