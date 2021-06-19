#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * (only putchar and three putchar).
 *
 * Return: 0
 */

int main(void)
{
	int num = 0;
	char letter = 97;

	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;
	}

	while (letter <= 102)
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
