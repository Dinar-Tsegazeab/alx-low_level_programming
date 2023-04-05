#include "main.h"
/**
 * factorial - Function that returns the factorial of a given number
 * @n: integer input
 *
 * Return: factorial of n, -1 to indicate an error
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
