#include "main.h"

/**
  *helperFunction - check if sqrt exists
  * @num: number
  * @pSqrt: possible sqrt of number
  * Return: sqrt of number or -1 for error
  */

int helperFunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > num)
			return (-1);
		else
			return (helperFunction(num, pSqrt + 1));
	}
}

/**
  * _sqrt_recursion - returns natural square root of a number
  * @n: number given
  * Return: squareroot of n
  * -1 if no square root
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperFunction(n, 0));
}
