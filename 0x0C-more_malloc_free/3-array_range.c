#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @max: maximum range of values stored
 * @min: minimum range of values stored
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *x, j, k = 0;
if (min > max)
{
return (NULL);
}

j = (max - min + 1);

x = malloc(sizeof(int) * j);

if (x == NULL)
{
	return (NULL);
}

for (k = 0; min <= max; k++)
x[k] = min++;

return (x);

}
