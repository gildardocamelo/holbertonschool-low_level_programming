#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer, starting from
 * 00:00 to 23:59.
 *
 * Description: not allowed to include standard libraries, pintf and puts.
 *
 *@void: no argument
 *
 */

void jack_bauer(void)
{
	int h, m;

	while (h < 24)
	{
		while (m < 60)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
			m++
		}

		h++
	}
}
