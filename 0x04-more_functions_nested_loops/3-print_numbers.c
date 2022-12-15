#include "main.h"

/**
 * print_numbers - print number between 0 to 9
 * Return: has no return
 */
void print_numbers(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
