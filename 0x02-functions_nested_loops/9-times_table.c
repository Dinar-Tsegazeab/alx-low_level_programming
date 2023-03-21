#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: ...
 */

void times_table(void)
{

int X, Y;
int tab = 0;

for (X = 0; X < 10; X++)
{
for (Y = 0; Y < 10; Y++)
{
tab = (X * Y);
if (tab < 10)
{
if (Y != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar(tab + '0');
}
else
{
_putchar(' ');
_putchar((tab / 10) + '0');
_putchar((tab % 10) + '0');
}
if (Y != 9)
_putchar(',');
}
_putchar('\n');
}
}
