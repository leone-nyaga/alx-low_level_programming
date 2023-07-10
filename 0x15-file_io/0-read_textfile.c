#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd, bytes_read, bytes_written;
    char buffer[1024];
    ssize_t j;

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

    for (j = 0; j < (ssize_t)bytes_read && j < (ssize_t)letters; j++)
    {
        bytes_written = write(STDOUT_FILENO, &buffer[j], 1);
        if (bytes_written == -1)
        {
            close(fd);
            return (0);
        }
    }

    close(fd);
    return (bytes_read);
}

