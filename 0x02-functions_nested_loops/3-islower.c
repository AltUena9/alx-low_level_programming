#include "main.h"
/**
 *  _islower- Checks if character is lowercase
 * @c: is the character to check
 * Return: 1 if c is lowercase and 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
