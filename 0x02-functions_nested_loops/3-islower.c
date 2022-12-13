#include "main.h"

/**
 * _islower - Checks for lower case characters
 *
 * @c: the character in ASCII code
 *
 * Return: 1 for lowercase characters. 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
