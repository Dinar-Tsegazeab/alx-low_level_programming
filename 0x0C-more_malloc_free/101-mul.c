#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"
/**
 * is_digit - checik if a string contains a non-digit char
 * @s: string to be evaluate
 *
 * Return: 0 if a non-digit is found, otherwise 1
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * _strlen - return the lengthof a string
 * @s: String to evaluate
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
		exit(98);
}
/**
 *  main - multiplies two positive numbers
 * @argc: the number of arguments
 * @argv: array of  arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
char *s1, *s2;
int L1 = 0, L2 = 0, L = 0, i = 0, C = 0, D1 = 0, D2 = 0, *R = 0, a = 0;

s1 = argv[1], s2 = argv[2];
if (argc != 3 || !is_digit(s1) || !is_digit(s2))
errors();
L1 = _strlen(s1);
L2 = _strlen(s2);
L = L1 + L2 + 1;
R = malloc(sizeof(int) * L);
if (!R)
return (1);
for (i = 0; i <= L1 + L2; i++)
R[i] = 0;
for (L1 = L1 - 1; L1 >= 0; L1--)
{
D1 = s1[L1] - '0';
C = 0;
for (L2 = _strlen(s2) - 1; L2 >= 0; L2--)
{
D2 = s2[L2] - '0';
C += R[L1 + L2 + 1] + (D1 *D2);
R[L1 + L2 + 1] = C % 10;
C /= 10;
}
if (C > 0)
R[L1 + L2 + 1] += C;
}
for (i = 0; i < L - 1; i++)
{
if (R[i])
a = 1;
if (a)
putchar(R[i] + '0');
}
if (!a)
putchar('0');
putchar('\n');
free(R);
return (0);
}
