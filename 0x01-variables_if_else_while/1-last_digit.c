#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The main function of the program
 *
 * Return: 0 if Success
 */
int main(void)
{
	int n;
	int y;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;
	if (y > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, y);
	}
	else if (y == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, y);
	}
	else if (y < 6 && y != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not\n", n, y);
	}
	return (0);
}
