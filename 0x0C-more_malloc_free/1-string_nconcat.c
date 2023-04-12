#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Function that concatenates two strings
 * @s1: Append string
 * @s2: Concatenate string
 * @n: Number of bytes from s2 to concatenates to s1
 *
 * Return: Pointer to the result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *new_str;
unsigned int i = 0, len1 = 0, len2 = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1])
len1++;
while (s2[len2])
len2++;

if (n >= len2)
n = len2;

new_str = malloc(sizeof(char) * (len1 + n + 1));
if (new_str == NULL)
return (NULL);

for (i = 0; i < len1; i++)
new_str[i] = s1[i];
for (i = 0; i < n; i++)
new_str[len1 + i] = s2[i];
new_str[len1 + n] = '\0';

return (new_str);
}
