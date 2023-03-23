#include "main.h"

/**
 * Print_diagonal - Draw a diagonal line on the terminal
 * @n: to print number of diagonal lines
 * Return empty
 */

void print_diagonal(int n)

{
	int d, m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{

for (d = 0; d < n; d++)
{

for (m = 0; m < d; m++)
{
_putchar(25);
}
_putchar(55);
_putchar('\n');
}
}
}
