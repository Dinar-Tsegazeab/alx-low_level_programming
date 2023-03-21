#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times in
 *
 *Return: void
 */

void print_alphabet_x10(void)
{
char txt  = 'a';
int num  = 0;
while (num < 10)
{
for (txt = 'a'; txt <= 'z'; txt++)
_putchar(txt);
num++;
_putchar('\n');
}
}
