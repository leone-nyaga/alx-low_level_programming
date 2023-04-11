#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenate all the arguments of your program
 * @ac: integer input
 * @av: array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int a, d, b, c;
	char *s;

	b = 0;
	c = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (d = 0; av[a][d]; d++)
			c++;
	}
	c += ac;

	s = malloc(sizeof(char) * (c + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (d = 0; av[a][d]; d++)
		{
			s[b] = av[a][d];
			b++;
		}
	if (s[b] == '\0')
	{
		s[b++] = '\n';
	}
	}
	return (s);
}
