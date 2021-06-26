#include "holberton.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 *
 * Description: only use _putchar function to print, where n is the number of
 * times the character \ should be printed, the line should end with a \n, if n
 * is 0 or less, the function should only print \n
 *
 * @n: numbers line
 *
 */

void print_diagonal(int n)
{
	int i, j;

	for (j = 0 ; j <= n ; j++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else if (n > 0)
		{
			for (i = 0 ; i < n; i++)
			{
				if (i == j)
				{
					_putchar('\\');
				}

				else if (i < j)
				{
					_putchar (' ');
				}

			}

			_putchar('\n');
		}
	}
}
