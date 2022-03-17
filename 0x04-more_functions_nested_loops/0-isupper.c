#include "main.h"

/**
 * _isupper - checks for if the inputed character is an uppercase letter.
 * @c: variable to be checked
 * Return: 1 if uppercase and 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
