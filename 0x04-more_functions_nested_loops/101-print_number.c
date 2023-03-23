#include "main.h"

/**
 * print_number - prints an integer n to the console
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
int i, j, k, m;

if (n < 0)
{
_putchar('-');
n = -n;
}

i = n;
j = 1;

while (i > 9)
{
j *= 10;
i /= 10;
}

while (j > 0)
{
k = n / j;
m = k % 10;
_putchar(m + '0');
j /= 10;
}
}
