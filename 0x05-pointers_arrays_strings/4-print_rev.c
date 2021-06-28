#include "holberton.h"

/**
 * print_rev - function that prints a string, in reverse, followed by a
 * new line.
 *
 * @s: pointer character.
 *
 */

void print_rev(char *s)
{
	int n = 0, m;

	for (m = 0; s[m] != '\0'; m++)
	{}
	for (n = m; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
