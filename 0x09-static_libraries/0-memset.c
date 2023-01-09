#include "main.h"

/**
 * _memset - fills the first memory with given values
 * Return: pointer to th memory
 * @s: starting address
 * @b: the desired value
 * @n: number of bytes to be changed
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
