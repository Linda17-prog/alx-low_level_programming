#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Set of characters
 *
 * Return: Void
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}
