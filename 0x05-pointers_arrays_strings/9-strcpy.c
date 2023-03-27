#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed by the pointer 'src' to
 * the buffer pointed to by 'dest'
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\n');

	return (dest);
}
