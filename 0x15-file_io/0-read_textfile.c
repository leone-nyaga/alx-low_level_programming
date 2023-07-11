#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - Read and print the contents of
 * a file up to a specified number of characters.
 * @filename: The name of the file to read.
 * @letters: The maximum number of characters to print.
 *
 * Return: The total number of characters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_read, bytes_written;
	char buffer[1024];
	ssize_t total_read = 0, j;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytes_read = read(fd, buffer, sizeof(buffer));
	if (bytes_read == -1)
	{
		close(fd);
		return (0);
	}

	for (j = 0; j < bytes_read && total_read < (ssize_t)letters; j++)
	{
		bytes_written = write(STDOUT_FILENO, &buffer[j], 1);
		if (bytes_written == -1)
		{
			close(fd);
			return (0);
		}
		total_read++;
	}

	close(fd);
	return (total_read);
}

