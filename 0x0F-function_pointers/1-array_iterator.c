#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter on each array
 * @size: how many elements to be printed
 * @array: an array
 * @action: pointer to be printed
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;

	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
