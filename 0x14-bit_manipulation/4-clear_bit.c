#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @index: index of bit
 * @n: pointer
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	bit_mask = 1UL << index;

	*n &= ~bit_mask;

	return (1);
}

