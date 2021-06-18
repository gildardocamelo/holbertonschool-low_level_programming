#include <stdio.h>

/**
 * main - prints the alphabet in lowercase (only putchar and twice - print all
 * the letters except q and e).
 *
 * Return: 0
 */

int main(void)
{
	char low_alph = 97;

	while (low_alph <= 122)
	{
		if (low_alph != 113 && low_alph != 101)
			putchar (low_alph);
		low_alph++;
	}

	putchar ('\n');
	return (0);
}
