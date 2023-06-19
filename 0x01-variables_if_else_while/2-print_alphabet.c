#include <stdio.h>
/**
 * main - Entry point
 * Code to print the alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
