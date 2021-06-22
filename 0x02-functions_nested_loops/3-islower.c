#include "holberton.h"

/**
 * _islower - function that checks for lowercase character.
 *
 * Description: allowed twice _putchar and not allowed to include standard
 * libraries, pintf and puts.
 *
 *@c: character
 *
 * Return: 0 for uppercase, 1 for lowercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)

		return (1);

	else

		return (0);
}
