#include "main.h"

/**
 * print_sign - Determines the sign of the number
 *
 * @n: Integer number as an input.
 *
 * Return: 1 if it is greaterthan zer. 0 if zero.
 * -1 if lessthan zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}

