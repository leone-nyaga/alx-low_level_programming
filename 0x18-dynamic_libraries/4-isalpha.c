#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: The letters being checked
 * Return: 1 if c is lowercase or uppercase 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	return (0);
}
