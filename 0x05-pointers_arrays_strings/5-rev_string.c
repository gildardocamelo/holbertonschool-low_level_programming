#include "holberton.h"

/**
 * rev_string - function that reverses a string.
 *
 * @s: pointer character.
 *
 */

void rev_string(char *s)
{
	int i, n;
	char c;

	for (i = 0; s[i] != '\0'; i++)
	{}
	n = i - 1;
	for (i = n; s[n] >= 0; n--)
	{
		putchar(s[n]);
	}

	*s = c;
	c = s[n];
	putchar('\n');
}
