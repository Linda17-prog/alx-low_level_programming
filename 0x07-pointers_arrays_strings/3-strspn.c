#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: Pointer to initial segment
 * @accept: Pointer to acceptance segment
 *
 * Return: Number of bytes in initial segment of s cosisting of only bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, a_len = 0, len = 0;

	while (accept[a_len] != '\0')
		a_len++;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < a_len; j++)
		{
			if (s[i] == accept[j])
				len++, j = a_len;
			else
				if (j == a_len - 1)
					goto exit;
		}
	}
exit: return (len);
}
