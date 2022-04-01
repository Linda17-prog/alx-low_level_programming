#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers as arguments
 * @argc: Number of arguments passed
 * @argv: Pointer to the array of arguments passed
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int mul =  1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul = atoi(argv[1]) * atoi(argv[2]);
		}

		printf("%i\n", mul);
		return (0);
	}

	printf("%s\n", "Error");
	return (1);
}
