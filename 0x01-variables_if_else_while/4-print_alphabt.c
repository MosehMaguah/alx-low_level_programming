#include <stdio.h>

/**
 * main - print all except e and q
 * Return: Always 0
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		if (al != 'e' && al != 'q')
			putchar(al);
	}
	putchar('\n');

	return (0);
