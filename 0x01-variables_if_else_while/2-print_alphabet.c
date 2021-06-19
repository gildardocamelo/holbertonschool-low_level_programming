#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase (only putchar and twice).
 *
 * Return: 0.
 */

int main(void)
{
	char low_alph = 97;

	while (low_alph <= 122)
	{
		putchar(low_alph);
		low_alph++;
	}

	putchar('\n');

	return (0);
}
