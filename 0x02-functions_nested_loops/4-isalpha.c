#include "main.h"
/**
 * _isalpha - Checks if character is alphabetic
 * @c: character to check
 * Return: 1 if c is a letter, lowercase o uppercase and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 98))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
