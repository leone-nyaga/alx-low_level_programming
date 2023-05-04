#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 0;
	unsigned int j = 0;

	if (b == NULL)
		return (0);

	while (b[j])
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		k <<= 1;
		if (b[j] == '1')
			k += 1;
		j++;
	}
	return (k);
}

