#include "main.h"

/**
 * _abs - completes the absolute value of an integer
 * @n: variable representing integer
 * Return: void
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
