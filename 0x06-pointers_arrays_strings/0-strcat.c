#include "main.h"
/**
 * _strcat - function that Concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
int str_dest = 0, i;

while (dest[str_dest] != '\0')
str_dest++;

for (i = 0; src[i] != '\0'; i++)
dest[str_dest + i] = src[i];

dest[str_dest + i] = '\0';

return (dest);
}
