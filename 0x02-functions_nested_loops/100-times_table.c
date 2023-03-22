#include "main.h"
/**
 * print_times_table -  Prints the n times table, starting with 0.
 * @n: input of table n
 * Return: ...
 */
void print_times_table(int n)
{
int X, Y;
int tab = 0;

if (n <= 15 && n >= 0)
{
for (X = 0; X <= n; X++)
{
for (Y = 0; Y <= n; Y++)
{
tab = (X * Y);
if (tab < 10)
{
if (Y != 0)
{
_putchar(' ');
_putchar(' ');
_putchar(' ');
}
_putchar(tab + '0');
}
else if (tab < 100)
{
_putchar(' ');
_putchar(' ');
_putchar((tab / 10) + '0');
_putchar((tab % 10) + '0');
}
else
{
_putchar(' ');
_putchar((tab / 100) + '0');
_putchar(((tab % 100) / 10) + '0');
_putchar((tab % 10) + '0');
}
if (Y != n)
_putchar(',');
}
_putchar('\n');
}
}
}
