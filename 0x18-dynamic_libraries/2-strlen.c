#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: 0 (success)
 */

int _strlen(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen(s + 1);
	}
	return (i);
}
