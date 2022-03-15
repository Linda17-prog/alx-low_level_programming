#include "main.h"

/**
 * print_alphabet_x10 - Prints lowercase alphabet x10
 *
 * Return: No return value
 */

void print_alphabet_x10(void)
{
	int i;
	int a;

	for (a = 0; a <= 9; a++)
	{
		for (i = 97; i < 123; i++)
			_putchar(i);
		_putchar('\n');
	}
}
