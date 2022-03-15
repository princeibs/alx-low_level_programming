#include "main.h"

/**
 * main - printts _putchar
 *
 * Description: prints the text _putchar to the standard output
 *
 * Return: 0 (Success)
 *
 */

int main(void)
{
	char output[9] = "_putchar";

	for (int i = 0; i <= 9; i++)
	{
		_putchar(output[i]);
	}
	_putchar('\n');

	return (0);
}
