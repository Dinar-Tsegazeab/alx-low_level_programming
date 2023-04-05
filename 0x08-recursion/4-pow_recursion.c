#include "main.h"
/**
 * _pow_recursion - Function that returns the value of x raised to the pow of y
 * @x: base number
 * @y: exponent
 *
 * Return: -1 if y is lower than 0, otherwise return x raised to pow y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else
return (x * _pow_recursion(x, y - 1));
}
