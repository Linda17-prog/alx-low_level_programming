#include <stdio.h>

/**
 * main - Finds and prints sum of even terms in Fibonnaci sequence
 *
 * Return: Always 0
 */

int main(void)
{
	long int i;
	long int first = 0;
	long int second = 1;
	long int sum = 0;
	long int total;

	for (i = 1; i < 4000000; i++)
	{
		sum = first + second;
		if (sum % 2 == 0)
			total += sum;
		first = second;
		second = sum;
	}

	printf("%ld\n", total);

	return (0);
}
