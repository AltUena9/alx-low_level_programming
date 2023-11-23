#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: points to a string of binary numbers
 * Return: converted number or
 * 0 if one or more characters in string b isnt binary or b is null
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		num <<= 1;
		if (b[a] == '1')
			num += 1;
	}
	return (num);
}
