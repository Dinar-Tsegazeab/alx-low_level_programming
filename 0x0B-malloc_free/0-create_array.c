#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars c
 * @size: Size of array
 * @c: Char to assign
 * Descriiption: Create array of size and assign char c
 * Return: A pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

if (size == 0)
return (NULL);

arr = malloc(size * sizeof(char));
if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
	arr[i] = c;

return (arr);
}
