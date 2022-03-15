#include <stdio.h>

/**
 * main - Print first 98 Fibonnaci numbers
 *
 * Return; Always 0
 */

int main(void)
{
	long int i;
	long int first = 1;
	long int second = 2;
	long int l = 1000000000;
	long int first1;
	long int first2;
	long int second1;
	long int second2;

	printf("%ld", first);

	for (i = 1; i < 91; i++)
	{
		printf(", %ld", second);
		second += first;
		first = second - first;
	}

	first1 = (first / l);
	first2 = (first % l);
	second1 = (second / l);
	second2 = (second % l);

	for (i = 92; i < 99; ++i)
	{
		printf(", %ld", second1 + (second2 / l));
		printf("%ld", second2 % l);
		second1 = second1 + first1;
		first1 = second1 - first1;
		second2 = second2 + first2;
		first2 = second2 - first2;
	}
	printf("\n");
	return (0);
}

