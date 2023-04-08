#include "main.h"
/**
 * _memset - Funcyion that fills memory with a constant byte
 * @s: bytes of the memory area
 * @b: constant byte
 * @n: fills the first number of bytes
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
