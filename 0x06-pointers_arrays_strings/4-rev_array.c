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
	int j;
	int tmp;
	
	i = 0;
	j = n - 1;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
