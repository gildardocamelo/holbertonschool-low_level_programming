#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */

int main(void)
{
char low_alphabet;

for (low_alphabet = 'a'; low_alphabet <= 'z'; low_alphabet++)
{
if (low_alphabet != 'e' && low_alphabet != 'q')

putchar(low_alphabet);

}

putchar('\n');

return (0);
}
