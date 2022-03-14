#include <stdio.h>

/**
 * main - prints letters of the alphabet
 *
 * Description: prints all lowercase letters of the alphabet except
 * letter q and letter e
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar(10);

	return (0);
}
