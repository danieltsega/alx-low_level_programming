#include "main.h"

/**
 * main - the main function
 *
 * Return: 0 if Success
 */
int main(void)
{
	int msg[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int c, s;

	s = sizeof(msg) / sizeof(int);
	for (c = 0; c < s; c++)
	{
		_putchar(msg[c]);
	}
	_putchar('\n');
	return (0);
}
