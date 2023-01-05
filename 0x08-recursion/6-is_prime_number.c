#include "main.h"

/**
  * helperFunction - returns 0 or 1.
  * @num: number to check
  * @i: possible factor of the number
  * Return: 0 if not prime and 1 if prime
  */

int helperFunction(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (helperFunction(num, i + 1));
		}
	}
	else
		return (1);
}

/**
  * is_prime_number - check if number i prime number
  * @n: number
  * Return: 0 and -1 if not prime
  */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperFunction(n, 2));
	}
}
