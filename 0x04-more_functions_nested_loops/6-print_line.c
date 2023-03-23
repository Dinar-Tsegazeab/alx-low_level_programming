#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: num of times the character _ should be printed
 */
void print_line(int n)
{
	int d;
if (n <= 0)
{
_putchar('\n');
}
else
{

for (d = 0; d < n; d++)
{
_putchar('_');
}
_putchar('\n');
}
}
