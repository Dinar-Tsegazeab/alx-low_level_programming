#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: ...
 */
#include <stdlib.h>
#include <string.h>

char *argstostr(int ac, char **av)
{
int i, j, len;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

len = 0;
for (i = 0; i < ac; i++)
len += strlen(av[i]) + 1;

str = malloc(sizeof(char) * len);
if (str == NULL)
return (NULL);

len = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[len] = av[i][j];
len++;
}
str[len] = '\n';
len++;
}
str[len] = '\0';

return (str);
}
