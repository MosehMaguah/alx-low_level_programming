#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @n: string
 * Return: value of n
 */

char *leet(char *n)
{
	int i, j;
	char sl[] = "aAaEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}
	return (n)
}
