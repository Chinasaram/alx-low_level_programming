#include "main.h"

/**
 * _strlen - checks for the length of a string
 * @s: input char
 * Return: length of a string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
