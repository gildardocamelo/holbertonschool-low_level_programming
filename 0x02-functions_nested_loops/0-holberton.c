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
	int num = 0;

	while (string[num] < 9)
	{
		_putchar(string[num]);
		num++;
	}
	_putchar('\n');

	return (0);
}
