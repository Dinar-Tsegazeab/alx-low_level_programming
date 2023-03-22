#include <stdio.h>

/**
 * main - Computes and prints the sum of all
 * the multiplication of 3 or 5 below 1024
 *
 * Return: int.
 */

int main(void)
{
int mult = 0;
int res = 0;

while (mult < 1024)
{
if (mult % 3 == 0 || mult % 5 == 0)
{
res += mult;
}
mult += 1;
}
printf("%d\n", res);
return (0);
}
