#include "holberton.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 *
 * @str: pointer character.
 *
 */

void puts_half(char *str)
{
	int x, y;

	for (x = 0; str[x] != '\0'; x++)
	{}

	for (y = (x / 2); y <= x; y++)
	{
		putchar(str[y]);
	}
	putchar('\n');
}
