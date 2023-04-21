#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns sum of all its parameters
 * @n: numbers of parameters passed to the function
 * ...: the variable number to calculate the sum
 *
 * Return: (n == 0)
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, j = 0;
	va_list k;

	va_start(k, n);

	for (i = 0; i < n; i++)
	{
		j += va_arg(k, int);
	}
	va_end(k);
	return (j);
}

