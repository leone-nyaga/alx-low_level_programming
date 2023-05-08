#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 * @filename: text file that is being read
 * @letters: numbbers of letters
 * the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		FILE *file;
		char *buffer;
		size_t nread, nwritten;
		size_t l;

		file = fopen(filename, "r");
		if (file == NULL)
		{
			return (0);
		}

		buffer = malloc(letters + 1);
		if (buffer == NULL)
		{
			fclose(file);
			return (0);
		}

		for (nread = 0; nread < letters; nread++)
		{
			int k = fgetc(file);
			if (k == EOF)
			{
				break;
			}
			buffer[nread] = k;
		}
		buffer[nread] = '\0';

		for (l = 0; l < nread; l += nwritten)
		{
			nwritten = fwrite(&buffer[1], sizeof(char), nread - l, stdout);
			if (nwritten <= 0)
			{
				break;
			}
		}

		free(buffer);
		fclose(file);

		return (nread);
	}
	else
	{
		return (0);
	}
}
