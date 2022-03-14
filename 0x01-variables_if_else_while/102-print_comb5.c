#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Description: prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int a, b, c, d;

	a = 48;

	while (a <= 57)
	{
		b = 48;
		while (b <= 57)
		{
			c = a;
			d = b + 1;
			while (c <= 57)
			{
				while (d <= 57)
				{
					putchar(a);
					putchar(b);
					putchar(32);
					putchar(c);
					putchar(d);
					if (a <= 56 || b <= 55 || c <= 56 || d <= 56)
					{
						putchar(44);
						putchar(32);
					}
					d++;
				}
				d = 48;
				c++;
			}
			b++;
		}
		a++;
	}
	putchar(10);

	return (0);
}
