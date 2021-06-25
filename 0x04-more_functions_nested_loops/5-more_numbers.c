#include "holberton.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 *
 * Description: only use _putchar three in your code.
 *
 */

void more_numbers(void)
{
	int n;
	int a;

	for (a = 0; a < 10; a++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar ((n / 10) + '0');
			_putchar ((n % 10) + '0');
		}
		_putchar('\n');
	}
}
