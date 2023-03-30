#include "main.h"
/**
 * cap_string - Function that capitalizes all words of a string.
 * @str: String to be modified.
 *
 * Return: Modified string.
 */
char *cap_string(char *str)
{
char *ptr = str;
int next_cap = 1;

while (*ptr != '\0')
{
if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
*ptr == ',' || *ptr == ';' || *ptr == '.' ||
*ptr == '!' || *ptr == '?' || *ptr == '"' ||
*ptr == '(' || *ptr == ')' || *ptr == '{' ||
*ptr == '}')
next_cap = 1;
else if (next_cap && (*ptr >= 'a' && *ptr <= 'z'))
{
*ptr -= 32;
next_cap = 0;
}
else
next_cap = 0;

ptr++;
}

return (str);
}
