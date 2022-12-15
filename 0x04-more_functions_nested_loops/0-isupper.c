#include "main.h"

/**
 * _isupper - checks if it is an uppercase or not
 * @c: the input
 * Return: 1 if uupercase 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c >= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
