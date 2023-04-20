#include "function_pointers.h"

/**
 * int_index - function that searches for an intergers
 * @size: size of elements in an array
 * @arrays: the array of intergers
 * @cmp: pointer to the function to be used to compare values
 * Return: index of the first element for which cmp returns non-zero
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}

	return (-1);
}
