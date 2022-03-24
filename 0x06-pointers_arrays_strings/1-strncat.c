#include "main.h"

/**
 * *_strncat - Concatenates two strings with n bytes from src
 * @dest: String to be appended
 * @src: String to append
 *
 * Return: Pointeer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i))
		i++;
	while ((src + j < src + n) && *(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	return (dest);
}
