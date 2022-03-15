#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints positive, negative, or zero
 *
 * Description: prints positive when n is positive,
 * negative when n is negative, or zero when
 * n is 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
