#include "holberton.h"

/**
 * print_sign - function that checks for alphabetic character.
 *
 * Description: allowed twice _putchar and not allowed to include standard
 * libraries, pintf and puts.
 *
 *@n: integer
 *
 * Return: 0 if 0, 1 if + and -1 if -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
