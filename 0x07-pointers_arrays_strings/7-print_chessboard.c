#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - Function that prints the chessboard
 * @a: An array of 8 chacters to pointer
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}

_putchar('\n');
}
}
