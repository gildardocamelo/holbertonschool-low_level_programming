#include "holberton.h"

/**
 * print_line - function that draws a straight line in the terminal.
 *
 * Description: only use _putchar function to print, where n is the number of
 * times the character _ should be printed, the line should end with a \n, if n
 * is 0 or less, the function should only print \n
 *
 * @n: numbers line
 *
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			_putchar('_');
		}
		putchar('\n');
	}
}
