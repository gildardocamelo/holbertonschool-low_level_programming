#include "holberton.h"

/**
 *
 * puts_half - function that prints half of a string, followed by a new line.
 *
 * @str: string pointer
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i >= 5 && i != '\0')
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
