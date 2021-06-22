#include "holberton.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Description: allowed twice _putchar and not allowed to include standard
 * libraries, pintf and puts.
 *
 * @void: no argument
 */

void print_alphabet(void)
{
	char low_alph = 97;

	while (low_alph <= 122)
	{
		_putchar(low_alph);
		low_alph++;
	}

	_putchar('\n');

}
