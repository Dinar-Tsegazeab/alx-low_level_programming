#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Return:void
 */
void print_alphabet(void)
{
char txt = 'a';

while (txt <= 'z')
{
_putchar(txt);
txt++;
}

_putchar('\n');
}
