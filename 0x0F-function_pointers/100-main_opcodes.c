#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])

{
	unsigned char op;
	int i, j;
	int (*address)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (j < 0; j < i; j++)
	{
		op = *(unsigned char *)address;
		printf("%.2x", op);

		if (j == i - 1)
			continue;
		printf(" ");
		address++;
	}
	printf("\n");
	return (0);
}

