#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of elements
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int j = 0;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	s = malloc(size * nmemb);
	if (s == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < (size * nmemb); j++)
		s[j] = 0;

	return (j);

}
