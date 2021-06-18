#include <stdio.h>

/**
 * main - numbers of base 10 starting from 0. (No char and only using putchar)
 *
 * Return: Always 0.
 */

int main(void)
{

int num = 48;

while (num < 10)

{
putchar(num);
num++;
}

putchar('\n');

return (0);
}
