#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0 if success
 */
int main(void)
{
	int i;
	int b;

	while (b < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (b != i && b < i)
			{
				putchar(b);
				putchar(i);
				if (i == 57 && b == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++
		}
		b++
	}
	putchar('\n');
	return (0);
}
