#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings
 * @s1: The first string to concatenate
 * @s2: The second string to concatenate
 *
 * Return: Two strings concatenates
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
unsigned int i, x, len1 = 0, len2 = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;

concat = malloc(sizeof(char) * (len1 + len2 + 1));

if (concat == NULL)
return (NULL);

for (i = 0; i < len1; i++)
concat[i] = s1[i];
for (x = 0; x < len2; x++)
concat[i + x] = s2[x];

concat[i + x] = '\0';

return (concat);
}
