#include "main.h"
/**
 * int factorial - function that returns the factorial of a given number.
 * @n: number to find the factorial for
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
