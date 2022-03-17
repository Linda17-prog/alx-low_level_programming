#include "main.h"
/**
 * print_triangle - Prints a triangle of a determined size
 * @size: Size of the triangle
 *
 * Return: No return value
 */

void print_triangle(int size)
{
	int i;
	int x;
	int spaces;

	for (i = 0; i <= size; i++)
	{
		for (spaces = (size - 1 - i); spaces > 0; spaces--)
		{
			_putchar (' ');
		}
		for (x = 0; x <= i; x++)
		{
			_putchar('#');
		}	
	_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar(' ');
	}
}

