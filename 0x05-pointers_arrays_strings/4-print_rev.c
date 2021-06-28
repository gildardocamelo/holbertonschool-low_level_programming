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
	int i = 0, c;

	while (s[c] != '\0')
		c++;
	c--;
	for (i = c; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
