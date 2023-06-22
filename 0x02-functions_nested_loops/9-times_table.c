#include "main.h"
/**
 * times_table -  prints the 9 times table
 * Return: none
 */
void times_table(void)
{
	int x, y, z, a, b;

	for (x = 0; x <= 9; x++)
	{
	for (y = 0; y <= 9; y++)
	{
	z = x * y;
	if (z > 9)
	{
	a = z % 10;
	b = (z - a) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(b + 48);
	_putchar(a + 48);
	}
	else
	{
	if (y != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(z + 48);
	}
	}
	_putchar('\n');
	}
}
