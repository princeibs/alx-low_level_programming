#include "main.h"

/**
 * main - prints _putchar
 *
 * Description: prints the text _putchar to the standard output
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char out[9] = "_putchar";

	int i = 0;

	while (i < 8)
	{
		_putchar(out[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
