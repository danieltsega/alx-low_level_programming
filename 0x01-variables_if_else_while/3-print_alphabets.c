#include <stdio.h>

/**
 * main - the main function of the program
 *
 * Return: 0 if success
 */
int main(void)
{
	char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int a;


	for (a = 0; a < 52; a++)
	{
		putchar(alph[a]);
	}
	putchar('\n');
	return (0);
}
