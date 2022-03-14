#include <stdio.h>

/**
 * main - prints all single digit numbers
 *
 * Description: prints all single digit numbers without using
 * the variable type char
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
	putchar(10);

	return (0);
}
