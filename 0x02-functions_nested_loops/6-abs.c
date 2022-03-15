#include "main.h"

/**
 * _abs - Returns absolute value of an integer
 * @n: Integer for the function
 * Return: no return value
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
