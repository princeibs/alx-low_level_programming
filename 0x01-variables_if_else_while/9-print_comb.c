#include <stdio.h>

/**
 * main - print all possible combination of single-digit numbers
 *
 * Description: print all possible combination of single-digit numbers
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(44);
			putchar(32);
		}
		n++;
	}
	putchar(10);

	return (0);
}
