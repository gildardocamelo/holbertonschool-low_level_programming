#include "holberton.h"

/**
 * swap_int - function that swaps the values of two integers.
 *
 * @a: pointer integer.
 * @b: pointer integer.
 *
 */
void swap_int(int *a, int *b)
{
	if (a != b)
	{
		*a += *b;
		*b = *a - *b;
		*a -= *b;
	}

}
