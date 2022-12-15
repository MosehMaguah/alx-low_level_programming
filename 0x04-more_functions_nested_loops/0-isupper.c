#include "main.h"

/**
 * _isupper - checks if character is uppercase
 * @c: the character
 * Return: 1 if c is uppercase, 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
