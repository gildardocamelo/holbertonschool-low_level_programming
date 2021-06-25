#include "holberton.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9, followed by
 * a new line.
 *
 * Description: only use _putchar twice in your code
 *
 */

void print_numbers(void)
{
	int n = 0;

	if (n <= 9)
	{

		_putchar (n + '0');
		n++;

	}
	_putchar ('\n');
}
