#include "main.h"

/**
 * _isdigit - checks forif an inputed character is a digit
 * @c: variable to be checked
 * Return: returns 1 if c is a digit and 0 if otherwise
 */

int _isdigit(int c)
{ 
	if (c >= 48 && c <=57)
	{
		return (1);
	}
	return (0);
}
