#include <unistd.h>
/**
 * main - The main function
 *
 * Return: 1 always if success
 *
 */
int main(void)
{
	char quot[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";


	write(2, quot, 59);
	return (1);
}

