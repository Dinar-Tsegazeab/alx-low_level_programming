#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: pointer to char
 * Return: char
 */

char *rot13(char *s)
{
int i = 0;
int n = 0;
char *l = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
char *r13 = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

while (*(s + i) != '\0')
{
while (*(l + n) != '\0')
{
if (*(s + i) == *(l + n))
{
*(s + i)  = *(r13 + n);
break;
}
n++;
}
n = 0;
i++;
}
return (s);
}
