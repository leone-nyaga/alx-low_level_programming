#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @binary: points to a string that holds the binary digits
 * Return: the converted number.
 */
unsigned int binary_to_uint(const char *binary)
{
    unsigned int num = 0;
    int index = 0;

    if (!binary)
    {
        return 0;
    }

    while (binary[index])
    {
        if (binary[index] < '0' || binary[index] > '1')
            return 0;
        num = 2 * num + (binary[index] - '0');
        index++;
    }

    return num;
}

