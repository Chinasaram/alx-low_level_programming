#include "main.h"

/**
 * _isalpha - checks if a letter is lowercase or uppercase
 * @c: variable or parameter to be checked
 * Return: returns 1 if lowercase or lowercase and 0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)

		return (1);

	else if (c >= 65 && c <= 90)

		return (1);

	else

		return (0);
}

