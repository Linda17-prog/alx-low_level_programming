#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	char ALPH[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alph[i]);
	}

	for (i = 0; i < 26; i++)
	{
		putchar(ALPH[i]);
	}

	putchar('\n');

	return (0);

}
