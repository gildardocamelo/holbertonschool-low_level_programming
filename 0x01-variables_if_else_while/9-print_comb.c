#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * (only putchar - four time).
 *
 * Return: 0
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');

		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}

		num++;
	}

	putchar('\n');

	return (0);
}
