#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void close_file(int fe);
char *create_buffer(char *file);

/**
 * create_buffer - allocates 1024 bytes for a buffer
 * @file: name of file
 * Return: pointer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - closes the file descriptor
 * @fe: file descriptor to be closed
 */

void close_file(int fe)
{
	int j = close(fe);

	if (j == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fe %d\n", fe);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0
 *
 * Description: number of argument is not the correct one, exit with code 97
 * file_from does not exist, or if you can not read it, exit with code 98
 * if you can not create or if write to file_to fails, exit with code 99
 * if you can not close a file descriptor , exit with code 100
 */

int main(int argc, char *argv[])
{
	int from, to, y, g;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
				"Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	y = read(from, buffer, 1024);

	do {
		if (from == -1 || y == -1)
		{
			dprintf(STDERR_FILENO,
					"Error, Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		g = write(to, buffer, y);
		if (to == -1 || g == -1)
		{
			dprintf(STDERR_FILENO,
					"Error, Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		y = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (y > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}


