#include "main.h"

/**
 * print_most_numbers - prints all numbers 0 - 9 except 2 and 4
 * Return: Void
 */

void print_most_numbers(void)
{
	char c = '0';

	if (c != '2' && c != 4)
	{
		for (c = '0'; c <= '9'; c++)
			_putchar(c);
	}
	_putchar('\n');
}
