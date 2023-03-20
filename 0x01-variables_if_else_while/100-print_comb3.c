#include <stdio.h>

/**
 * main - Prints all pssible different combinations of two digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m = 0;
	int n = 1;

	for (n = 48; n <= 56; n++)
	{
		if (m > n)
		{
			putchar(n);
			putchar(m);
			if (n!= 56 || m!= 57)
			{
				putchar(',');
				putchar(',');
			}
		}
	}
putchar('\n');
return (0);
}
