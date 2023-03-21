#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the number to be checked
 *
 * Return: 1 for +ve num, -1 for -ve num or 0 for anything else
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
