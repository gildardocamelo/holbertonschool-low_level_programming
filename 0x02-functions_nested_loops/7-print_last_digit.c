#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * Description: not allowed to include standard libraries, pintf and puts.
 *
 *@num: integer
 *
 * Return: value of the last digit.
 */

int print_last_digit(int num)
{
	int last_num;

	if (num >= 0)
	{
		last_num = (num % 10);
		_putchar(last_num + '0');
		return (last_num);
	}
	else
	{
		last_num = -1 * (num % 10);
		_putchar(last_num + '0');
		return (last_num);
	}
}
