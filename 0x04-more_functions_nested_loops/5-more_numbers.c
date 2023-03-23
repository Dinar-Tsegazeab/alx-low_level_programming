#include "main.h"
/**
 * more_numbers - function that prints more the numbers
 */
void more_numbers(void)
{
	int d,t;

	for (d = 1; d <= 10; d++)
	{
		for (t = 0; t <= 14; t++)
		{
			if (t >= 10)
				_putchar('1');
			_putchar(t % 10 + '0');
		}
		_putchar('\n');
	}
}
