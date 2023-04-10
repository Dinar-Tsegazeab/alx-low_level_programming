#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns pointer to a newly allocated space in memory
 * @str: char
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
char *new_str;
int i, len;

if (str == NULL)
return (NULL);

for (len = 0; str[len]; len++)
	;
new_str = malloc(sizeof(char) * (len + 1));
if (new_str == NULL)
return (NULL);

for (i = 0; str[i]; i++)
new_str[i] = str[i];

new_str[i] = '\0';

return (new_str);
}

