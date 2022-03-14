#include <stdio.h>

/**
 * main - Prints alphabet in lowercase
 *
 * Description: Prints all the alphabet in lowercase using the
 * putchar function
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int ch = 97;

	while (ch <= 122)
	{
		putchar(ch);
		ch++;
	}
	putchar(10);

	return (0);
}
