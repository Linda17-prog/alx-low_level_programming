#include "main.h"

/**
 * *_memcpy - Function that copies memory area
 * @dest: Memory area to be copied to
 * @src: Memory area to be copied from
 * @n: Number of bytes
 *
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
