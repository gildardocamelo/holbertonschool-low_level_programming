#include "holberton.h"

/**
 * _islower - function that checks for lowercase character.
 *
 * Description: not allowed to include standard
 * libraries, pintf and puts.
 *
 *@c: character
 *
 * Return: 0 if uppercase, 1 if lowercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)

		return (1);

	else

		return (0);
}
