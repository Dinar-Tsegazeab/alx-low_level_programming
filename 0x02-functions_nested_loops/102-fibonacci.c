#include "stdio.h"

/**
 * main - Starting the first 50 Fibonacci num starting with 1 and 2
 *
 * Return: int.
 */

int main(void)
{
long x = 0;
long y = 1;
int n = 0;
long fib;

while (n < 50)
{
fib = y + x;
if (n != 49)
printf("%ld, ", fib);
else
printf("%ld\n", fib);
x = y;
y = fib;
n += 1;
}
return (0);
}
