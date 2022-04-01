#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number of arguments passed
 * @argc: Number of arguments passed
 * @argv: Pointer to the array of arguments passed
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
