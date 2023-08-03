#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: position of bit to be returned
 * @n: number to search the bit in
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	for (j = 0; j <= index; j++)
	{
		if (j == index)
			return ((n >> j) & 1);
	}
	return (-1);
}

