#include "main.h"
/**
 * reverse_array - function that reversse the content of an array of integers
 * @a: pointer to reverese the array of integeres
 * @n: num of elemnet in array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{

int i, temporary;

for (i = 0; i < n / 2; i++)
{
temporary = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temporary;
}
}
