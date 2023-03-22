#include "stdio.h"

/**
 * main - Sum of all even fibonacci numbers to 4000000.
 *
 * Return: 0 (succesful)
 */

int main(void)
{
long x = 0;
long y = 1;
long n = 2;
int sum = n;

while (n + y < 4000000)
{
n += y;

if (n % 2 == 0)
sum += n;

y = n - y;

++x;
}

printf("%1d\n", sum);
return (0);
}
