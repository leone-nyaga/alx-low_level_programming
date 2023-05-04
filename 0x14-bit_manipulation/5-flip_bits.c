#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another
 * @m: second number
 * @n: first number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int j;
	unsigned int count = 0;
	unsigned long int bit_mask = 1UL;
	unsigned long int diff = n ^ m;

	for (j = 0; j < sizeof(unsigned long int) * 8; j++)
	{
		if (diff & bit_mask)
			count++;
		bit_mask = bit_mask << 1;
	}
	return (count);
}
