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
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar(10);

	return (0);
}
