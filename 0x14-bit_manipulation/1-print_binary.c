#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int j;
	unsigned long int bit_mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
	{
		putchar('0');
		return;
	}

	for (j = 0; j < (int)sizeof(unsigned long int) * 8; j++)
	{
		if (n & bit_mask)
			putchar('1');
		else
			putchar('0');

		bit_mask <<= 1;
	}
}
