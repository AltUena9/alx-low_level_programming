#include <stdio.h>
/**
 * main - Entry point
 * code for all alphabet except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
