#include "main.h"

/**
 * _strlen - returns the length of
 * @s: string
 * Return: 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
