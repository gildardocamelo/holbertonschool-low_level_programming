#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */

int main(void)
{
char low_alphabet;

for (low_alphabet = 'a'; low_alphabet <= 'z'; low_alphabet++)

putchar(low_alphabet);

putchar('\n');

return (0);
}
