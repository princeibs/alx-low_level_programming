#include <stdio.h>

/**
 * main - Prints letters of the alphabet
 *
 * Description: Prints all the letters of the alphabet in lowercase
 * immediately followed by uppercase
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int u=65;
	int l=97;

	while (l <=122)
	{
		putchar(l);
		l++;
	}

	while (u <=90)
	{
		putchar(u);
		u++;
	}
	putchar(10);

	return (0);
}
