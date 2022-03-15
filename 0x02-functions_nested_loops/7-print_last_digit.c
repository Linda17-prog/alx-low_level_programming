#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: Holds the integer for the function
 * Return: last digit of the number
 */

int print_last_digit(int n)
{
	int result = n % 10;

	if (result < 0)
		result *= -1;
	_putchar('0' + result);
	return (result);
}
