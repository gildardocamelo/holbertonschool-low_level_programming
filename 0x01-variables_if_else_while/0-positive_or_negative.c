#include <stdlib.h>
#include <time.h>

/**
 * main - greater than, less than and equal to.
 *
 * Return: 0
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d is positive! \n");
}
else if (n < 0)
{
printf("%d is negative! \n");
}
else
{
printf("%d is equal to 0 \n");
}

return (0);
}
