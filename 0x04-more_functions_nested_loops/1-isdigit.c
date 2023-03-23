#include "main.h"

/**
 * _isdigit - to check the numbers from 0 - 9
 * @c: Check the character code
 *
 * Return: 0 or 1 (success)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
