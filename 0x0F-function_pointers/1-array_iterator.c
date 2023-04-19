#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Function that executes a function on each
 * element of an array
 * @array: array to itrate through
 * @size: size of the array
 * @action: pointer to the function  you need to use
 *
 * Return: void
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

size_t i;

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
