#include <stdio.h>

/**
 * main - prints the first 98 of the fibonacci
 * numbers
 *
 * Return: 0 if success
 */
int main(void)
{
	int c, d1, d2;
	long int a1, a2, b1, b2, a11, a22;

	a1 = 1;
	a2 = 2;
	d1 = d2 = 1;
	printf("%ld, %ld", a1, a2);
	for (c = 0; c < 96; c++)
	{
		if (d1)
		{
			b1 = a1 + a2;
			printf(", %ld", b1);
			a1 = a2;
			a2 = b1;
		}
		else
		{
			if (d2)
			{
				a11 = a1 % 1000000000;
				a22 = a2 % 1000000000;
				a1 = a1 / 1000000000;
				a2 = a2 / 1000000000;
				d2 = 0;
			}
			b2 = (a11 + a22);
			b1 = a1 + a2 + (b2 / 1000000000);
			printf(", %ld", b1);
			printf("%ld", b2 % 1000000000);
			a1 = a2;
			a11 = a22;
			a2 = b1;
			a22 = (b2 % 1000000000);
		}
		if (((a1 + a2) < 0) && d1 == 1)
			d1 = 0;
	}
	printf("\n");
	return (0);
}
