#include "main.h"
#include <stddef.h>
/**
 * _strchr - Function that locates a character in a string
 * @s: pointer to string
 * @c: first occurrence character to locate
 *
 * Return: A pointer to the first occurence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
return (s);
return (NULL);
}
