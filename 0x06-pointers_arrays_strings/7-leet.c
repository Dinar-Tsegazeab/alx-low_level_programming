#include "main.h"

/**
 * leet - Function that Encodes a string into 1337.
 * @str: String to be encoded.
 *
 * Return: Encoded string.
 */

char *leet(char *str)
{
char *ptr = str;
char *char_leet = "AaEeOoTtLl";
char *num_leet = "4433007711";
int i, n;

while (*ptr != '\0')
{
i = 0;
n = 0;

while (char_leet[i] != '\0')
		{
if (*ptr == char_leet[i])
{
*ptr = num_leet[n];
break;
}

i++;
n++;
}

ptr++;
}

return (str);
}
