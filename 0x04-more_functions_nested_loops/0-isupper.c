#include "main.h"

/**
 * _isupper - The uppercase letters
 * @c: Check the character code
 *
 * Return: 0 or 1 (success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
