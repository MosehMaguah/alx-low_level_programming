#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0 (success)
 */

int main(void)
{
	int ones = '0';
	int tens = '0';
	int hun = '0';

	for (hun = '0'; hun <= '9'; hun++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			for (ones = '0'; ones <= '9'; ones++)
				if (!((ones == tens) || (tens == hun) ||
							(tens > ones) || (hun > tens)))
				{
					putchar(hun);
					putchar(tens);
					putchar(ones);
					if (!(ones == '9' && hun == '7' &&
								tens == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
		}
	}
	putchar('\n');
	return (0);
}
