#include "holberton.h"

/**
 * main - Prints "Holberton"
 *
 * Description: not allowed to include standard libraries, pintf and puts.
 *
 * Return: 0
 */

int main(void)
{
	char string[] = "Holberton";
	int i = 0;

	while (string[i] < 9)
	{
		_putchar(string[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
