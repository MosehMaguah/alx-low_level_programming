#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = 29 ; num < 39; num++)
		putchar(num);
		if (num != 38)
	{
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
