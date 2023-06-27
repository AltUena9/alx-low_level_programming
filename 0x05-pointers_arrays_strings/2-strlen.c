#include <stdio.h>
/**
 * _strlen - length of string
 * @str: String we are checking length
 * Return: Length
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
