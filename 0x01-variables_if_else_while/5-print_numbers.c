#include <stdio.h>

/**
 * main - prints all decimal numbers
 *
 * Description: prints all decimal numbers using the putchar function
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
		n++;
	}
	putchar (10);

	return (0);
}
