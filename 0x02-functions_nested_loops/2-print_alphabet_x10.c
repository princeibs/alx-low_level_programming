#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet
 *
 * Description: prints the letters of the alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int times = 0;
	char ch = 'a';

	while (times <= 9)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');

		times++;
	}
}
