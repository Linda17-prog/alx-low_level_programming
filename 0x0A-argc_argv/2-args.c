#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number of arguments passed
 * @argc: Number of arguments passed
 * @argv: Pointer to the array of arguments passed
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
