#include "holberton.h"

/**
 * _isupper - function that checks for uppercase character
 *
 * @c: the character for checked
 *
 * Return: 1 if character is uppercase, 0 otherwise
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
