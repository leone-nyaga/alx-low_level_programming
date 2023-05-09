#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 * @filename: text file that is being read
 * @letters: numbbers of letters
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t j, k, l;
	char *buffer;

	j = open(filename, O_RDONLY);
	if (j == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	l = read(j, buffer, letters);
	k = write(STDOUT_FILENO, buffer, l);

	free(buffer);
	close(j);
	return (k);
}
