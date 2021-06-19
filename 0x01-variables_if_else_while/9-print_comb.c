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

	while (num <= 9)
	{
		putchar(num + '0');
		num++;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
