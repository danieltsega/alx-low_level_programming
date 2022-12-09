#include <stdio.h>

/**
 * main - the main function of the program
 *
 * Return: 0 if success
 */
int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int a;


	for (a = 0; a < 26; a++)
	{
		putchar(alph[a]);
	}
	putchar('\n);
	return (0);
}
