#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Function that prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{
int i = 0, j = 0;

if (size <= 0)
{
printf("\n");
return;
}
while (i < size)
{
printf("%08x: ", i);
for (j = i; j < i + 10; j++)
{
if (j < size)
printf("%02x", *(b + j));
else
printf("  ");
if (j % 2 != 0)
printf(" ");
}
for (j = i; j < i + 10; j++)
{
if (j >= size)
break;
if (*(b + j) >= ' ' && *(b + j) <= '~')
printf("%c", *(b + j));
else
printf(".");
}
printf("\n");
i += 10;
}
}
