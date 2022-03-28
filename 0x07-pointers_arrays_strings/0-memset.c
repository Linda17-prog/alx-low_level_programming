#include "main.h"

/**
 * *_memset - Fills memory with a constant byte
 * @s: Memory area
 * @b: Constant byte
 * @n: Bytes of memory
 *
 * Return: Pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
		if (*(s + i) == '\0')
			break;
	}
	return (s);
}
