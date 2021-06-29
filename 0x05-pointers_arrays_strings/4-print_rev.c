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
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{}

	n = i - 1;

	for (i = n; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
