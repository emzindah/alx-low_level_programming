#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - function that returns the natural sqrt of a number
 * @n: the input number
 *
 * Return: natural sqrt
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_n(n, 0));
}

/**
 * _sqrt_n - natural square root of a number
 * @m: iterater number
 * @n: value of sqrt
 * Return: natural sqrt
 */
int _sqrt_n(int n, int m)
{
	if (n == m * m)
	{
		return (m);
	}
	else if (m * m > n)
	{
		return (-1);
	}
	return (_sqrt_n(n, m + 1));
}
