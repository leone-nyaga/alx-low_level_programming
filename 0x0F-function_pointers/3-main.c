#include "function_pointers.h"
#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - prints results of operations
 * @argv: an arrray of pointrs to the arguments
 * @argc: the number of arguments supplied in the program
 *
 * Return: 0
 */

int main(int argc, char *argv[])

{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}


	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
