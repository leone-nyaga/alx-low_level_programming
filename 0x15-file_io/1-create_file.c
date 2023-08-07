#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - creates a file with the specified filename and writes the
 *               text_content into it
 * @filename: the name of the file to create
 * @text_content: the text to write into the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
    int fd, bytes_written;
    int text_length = 0;
    int i;

    if (filename == NULL)
        return (-1);

    if (text_content != NULL)
    {
        while (text_content[text_length] != '\0')
            text_length++;
    }

    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (fd == -1)
        return (-1);

    if (text_content != NULL)
    {
        for (i = 0; i < text_length; i++)
        {
            bytes_written = write(fd, &text_content[i], 1);
            if (bytes_written == -1)
            {
                close(fd);
                return (-1);
            }
        }
    }

    close(fd);
    return (1);
}

