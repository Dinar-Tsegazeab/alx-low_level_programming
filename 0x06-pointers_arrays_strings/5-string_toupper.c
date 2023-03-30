#include "main.h"

/**
 * string_toupper - Function that changes all lowercase lettes
 * of a string to uppercase.
 * @str: String to be modified.
 *
 * Return: Modified string.
 */
char *string_toupper(char *str)
{
char *ptr = str;

while (*ptr)
{
if (*ptr >= 'a' && *ptr <= 'z')
*ptr -= 32;

ptr++;
}

return (str);
}
