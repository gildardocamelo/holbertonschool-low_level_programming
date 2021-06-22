#include "holberton.h"

/**
 * _isalpha - function that checks for alphabetic character.
 *
 * Description: allowed twice _putchar and not allowed to include standard
 * libraries, pintf and puts.
 *
 *@c: character
 *
 * Return: 0 otherwise and 1 if letter, lowercase or uppercase
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))

		return (1);

	else

		return (0);
}
