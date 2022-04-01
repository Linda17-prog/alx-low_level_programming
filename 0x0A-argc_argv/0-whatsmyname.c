#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the name of the program
 * @argc: Number of arguments passed
 * @argv: Pointer to arrat of arguments passed
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
