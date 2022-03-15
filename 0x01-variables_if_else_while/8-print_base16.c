#include <stdio.h>

/**
 * main - print all numbers of base 16
 *
 * Description: print all the numbers of base 16 in lowercase followed
 * by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n = '0';
	char ch = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar(10);

	return (0);
}
