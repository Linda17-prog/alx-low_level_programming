#include "main.h"
/**
 * _isupper - Check for uppercase characters
 * @c: Integer holding the character
 *
 * Return: 1 - Uppercase character 0 - Not uppercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
