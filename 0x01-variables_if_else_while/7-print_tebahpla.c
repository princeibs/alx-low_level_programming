#include <stdio.h>

/**
 * main - prints all lowercase alphabet
 *
 * Description: prints all lowercase alphabet in reverse order
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar(10);

	return (0);
}
