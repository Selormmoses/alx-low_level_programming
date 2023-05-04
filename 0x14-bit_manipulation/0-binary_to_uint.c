#include<stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int q;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (q = 0; b[q]; q++)
	{
		if (b[q] < '0' || b[q] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[q] - '0');
	}

	return (dec_val);
}
