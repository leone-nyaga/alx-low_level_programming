#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index: index of the bit
 * @n: pointer
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j = 1;
	unsigned long int k;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	for (k = 0; k < index; k++)
		j <<= 1;

	*n |= j;

	return (1);
}

