#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */

int main(void)
{
char low_upp_alpha;

for (low_upp_alpha = 'a'; low_upp_alpha <= 'z'; low_upp_alpha++)

putchar(low_upp_alpha);

for (low_upp_alpha = 'A'; low_upp_alpha <= 'Z'; low_upp_alpha++)

putchar(low_upp_alpha);

putchar('\n');

return (0);
}
