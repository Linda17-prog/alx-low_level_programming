#include "main.h"

/**
 * _strcat - Concatenate two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (*(dest + i))
		i++;
	while (*(src))
	{
		*(dest + i) = *(src);
		i++;
		src++;
	}

	return (dest);
}
