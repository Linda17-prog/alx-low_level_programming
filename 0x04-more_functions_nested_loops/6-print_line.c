#include "main.h"
/**
 * print_line - Print line
 * @n: Number of lines
 *
 * Return: Void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
