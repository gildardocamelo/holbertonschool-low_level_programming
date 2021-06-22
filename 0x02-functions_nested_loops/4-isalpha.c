#include "holberton.h"

/**
 * _isalpha - function that checks for alphabetic character.
 *
 * Description: not allowed to include standard
 * libraries, pintf and puts.
 *
 *@c: character
 *
 * Return: 0 if otherwise and 1 if letter, lowercase or uppercase
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))

		return (1);

	else

		return (0);
}
