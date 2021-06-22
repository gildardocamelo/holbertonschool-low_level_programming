#include "holberton.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Description: allowed twice _putchar and not allowed to include standard
 * libraries, pintf and puts.
 *
 * Return: 0
 */

void print_alphabet(void)
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
