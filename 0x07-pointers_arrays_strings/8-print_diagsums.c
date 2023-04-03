#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Function that prints sum of diagonals
 * in square matrix of integers
 * @a: Pointer to the first element of the square matrix
 * @size: Size of the square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i, d, sum1 = 0, sum2 = 0;

for (i = 0; i < size; i++)
{
for (d = 0; d < size; d++)
{
if (i == d)
sum1 += *(a + (i * size) + d);

if (i + d == size - 1)
sum2 += *(a + (i * size) + d);
}
}

printf("%d, %d\n", sum1, sum2);
}
