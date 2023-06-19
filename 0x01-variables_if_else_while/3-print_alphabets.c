#include <stdio.h>
/**
 * main - Entry point
 * Code for alphabets in lower and uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sl = 97;
	int cl = 65;

	while (sl <= 122)
	{
		putchar(sl);
		sl++;
	}
	while (cl <= 90)
	{
		putchar(cl);
		cl++;
	}
	putchar('\n');
	return (0);
}
