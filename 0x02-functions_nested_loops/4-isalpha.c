#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * Return: 1 for alphatic character and 0 for anything else
 */

int _isalpha(int m)
{
	if ((m >= 65 && m <= 98) || (m >= 97 && m <= 122))
	{
		return (1);
	}
	return (0);
}
