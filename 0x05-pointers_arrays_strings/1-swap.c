#include "main.h"

/**
 * swap_int - function that swaps the values of the two integers
 *
 * @a: pointer to an int
 * @b: pointer to other int
 * Return: ...
 */

void swap_int(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}
