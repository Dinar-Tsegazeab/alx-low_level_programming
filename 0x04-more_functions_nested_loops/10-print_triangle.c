#include "main.h"

/**
 * print_triangle - prints a triangle of size size
 * @size: size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
}
for (i = 0; i < size; i++)
{
for (j = 0; j < size - i - 1; j++)
{
_putchar(' ');
}
for (j = 0; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}

