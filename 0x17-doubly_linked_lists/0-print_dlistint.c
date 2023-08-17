#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints all elements of a dlistint_t list.
 * @h: Pointer to the head of the list.
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t count;

    for (count = 0; h != NULL; h = h->next, count++)
    {
        printf("%d\n", h->n);
    }

    return count;
}

