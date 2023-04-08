#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: destinaton string to concatenate
 * @src : source string to concatenate
 * @n: Max num of bytes to concatenate
 *
 * Return: pointer to the destinaton string
 */
char *_strncat(char *dest, char *src, int n)
{
int str_dest = 0;
int i;

while (dest[str_dest] != '\0')
{
str_dest++;
}
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[str_dest + i] = src[i];
}

dest[str_dest + i] = '\0';
return (dest);
}
