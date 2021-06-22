#include "holberton.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase x10 times
 *
 * Description: allowed twice _putchar and not allowed to include standard
 * libraries, pintf and puts.
 *
 * @void: no argument
 */

void print_alphabet_x10(void)
{
	char low_alph = 97;
	int num = 0;

	while (num <= 10)
	{

		while (low_alph <= 122)
		{
			_putchar(low_alph);
			low_alph++;

		}


		_putchar(low_alph + '0');
		num++;
		_putchar('\n');

	}


}
