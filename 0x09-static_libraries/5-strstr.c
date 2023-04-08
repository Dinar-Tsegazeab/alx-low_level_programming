#include "main.h"
#include <stddef.h>
/**
 * _strstr - Funtion that locates a substring
 * @haystack: first occurrence of the substring
 * @needle: substring to be located
 *
 * Return: pointer to the begnning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
int i, n;
for (i = 0; haystack[i] != '\0'; i++)
{
for (n = 0; needle[n] != '\0'; n++)
{
if (haystack[i + n] != needle[n])
{
break;
}
}
if (needle[n] == '\0')
{
return (haystack + i);
}
}
return (NULL);
}
