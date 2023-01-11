#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int e;

	while (*s)
	{
		for (e = 0; accept[e]; e++)
		{
			if (*s == accept[e])
				return (s);
		}
		s++;
	}
	return ('\0');
}
