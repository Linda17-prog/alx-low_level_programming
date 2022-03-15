#include "main.h"

/**
 * int _isalpha - Checks for alphabetic character
 * @c: integer holding the character
 * Return: 1 - if character is alphabetic 0 - if not
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <=122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
