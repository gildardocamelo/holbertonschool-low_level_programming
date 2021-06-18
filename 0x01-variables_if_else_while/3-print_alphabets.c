#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase (Only putchar
 * and three times).
 *
 * Return: 0
 */

int main(void)
{
	char low_upp_alph = 97;

	while (low_upp_alph <= 122)
	{
		putchar(low_upp_alph);
		low_upp_alph++;
	}

	/**
	 *Variables changes
	 */

	low_upp_alph = 65;

	while (low_upp_alph <= 90)
	{
		putchar(low_upp_alph);
		low_upp_alph++;
	}

	putchar('\n');

	return (0);
}
