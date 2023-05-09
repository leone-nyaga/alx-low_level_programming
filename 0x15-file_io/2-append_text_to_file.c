#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @text_content: NULL terminated string to add at the end of the file
 * @filename: name of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int j, k = 0, p = 0;

	j = open(filename, O_WRONLY, O_APPEND);

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[k])
			k++;
	}
	if (j == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		p = write(j, text_content, k);
		close(j);
	}
	if (p != k)
	{
		return (-1);
	}
	return (1);
}
