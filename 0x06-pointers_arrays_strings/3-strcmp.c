#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: Negative if str1 < str2,
 * 0 if str1 == str2 and positive if str1 > str2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
