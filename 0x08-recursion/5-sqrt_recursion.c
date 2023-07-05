#include "main.h"
#include <stdio.h>
int _sqrt(int n, int i);
/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: Number to square root
 * Return: Square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - calculates square root
 * @n: Number to square root
 * @i: Iterate number
 * Return: Square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
