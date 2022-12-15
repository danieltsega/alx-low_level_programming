#include "main.h"

/**
 * print_most_numbers - print numbers between 0 and 9
 * Return: no return
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		if (a != 50 && a != 52)
			_putchar(a);
	}
	_putchar('\n');
}
