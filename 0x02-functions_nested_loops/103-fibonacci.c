#include <stdio.h>

/**
 * main - prints the addition of the even fibonacci
 * numbers.
 *
 * Return: 0 if success
 */
int main(void)
{
	long int a1, a2, b, c;

	a1 = 1;
	a2 = 2;
	b = c = 0;
	while (b <= 4000000)
	{
		b = a1 + a2;
		a1 = a2;
		a2 = b;
		if ((a1 % 2) == 0)
		{
			c += a1;
		}
	}
	printf("%ld\n", c);
	return (0);
}
