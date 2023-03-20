#include <stdio.h>

/**
 * main - Entry point
 * Return: Always (Success)
 */

int main(void)
{
	int n, m, l;

	for (n = 48; n < 58; n++)
	{
	for (m = 49; m < 58; m++)
	{
		for (l = 50; 1 < 58; l++)
		{
			if (m > n && l > m)
			{
			putchar(n);
			putchar(m);
			putchar(l);

			if (n != 55 || m != 56 || 1 != 57)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
}
putchar('\n');

return (0);
}
