#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Integer array
 * @n: Number of elements in the array
 *
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp[1000];
	int j;
	int k = n - 1;

	for (i = 0; i < n; i++)
	{
		tmp[i] = a[i];
	}
	while (j < n)
	{
		*(a + j) = *(tmp + k);
		j++;
		k--;
	}
}
