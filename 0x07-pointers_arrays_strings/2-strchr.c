#include "main.h"

/**
 * *_strchr - Function that locates a character in a string
 * @s: String
 * @c: Character
 *
 * Return: Pointer to occurrence of c, NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			return (s);
	}

	return (NULL);
}
