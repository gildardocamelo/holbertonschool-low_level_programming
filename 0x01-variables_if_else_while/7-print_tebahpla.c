#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */

int main(void)
{
int rev_low_alph = 122;

while (rev_low_alph >= 97)
putchar(rev_low_alph);

rev_low_alph++;

putchar('\n');

return (0);
}
