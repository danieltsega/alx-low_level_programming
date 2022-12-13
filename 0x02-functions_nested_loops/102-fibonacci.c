#include <stdio.h>

/**
 * main - prints the addition of fibonacci numbers
 *
 * Return: 0 if success
 */
int main(void)
{
	int a;
	long int a1, a2, b;

	a1 = 1;
	a2 = 2;
	printf("%ld, %ld", a1, a2);
	for (a = 0; a < 48; a++)
	{
		b = a1 + a2;
		printf(", %ld", b);
		a1 = a2;
		a2 = b;
	}
	printf("\n");
	return (0);
}
