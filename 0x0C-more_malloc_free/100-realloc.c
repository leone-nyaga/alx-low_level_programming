#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated by malloc
 * @old_size: size of allocated memory
 * @new_size: new size of memory block
 *
 * Return: pointer to newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int x, y;
	char *j;
	char *o = ptr;

	x = 0;

	if (ptr == NULL)
	{
		j = malloc(new_size);
		return (j);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}

	j = malloc(new_size);
	if (j == NULL)
	{
		return (NULL);
	}

	if (new_size > old_size)
	{
		y = old_size;
	}

	for (x = 0; x < y; x++)
	{
		j[x] = o[x];
	}
	free(ptr);
	return (j);
}

