#include "main.h"

/**
  * factorial - returns factorial of given number
  * @n: number given
  * Return: 0
  */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
