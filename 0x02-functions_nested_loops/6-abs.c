#include "holberton.h"

/**
 * _abs - function that computes the absolute value of an integer.
 *
 * Description: not allowed to include standard libraries, pintf and puts.
 *
 *@num: integer
 *
 * Return: absolute value of @num
 */

int _abs(int num)
{
	if (num < 0)

		num = num * -1;

	return (num);
}
