#include "main.h"

/**
 * _isupper - check if char is uppercase
 * @c: the char
 * Return: 1 if true and 0 if false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
