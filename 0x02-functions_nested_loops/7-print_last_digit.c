#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: variable for argument passed
 * Return: last integer
 */


int print_last_digit(int n)
{
	n %= 10;

	if (n < 0)
	{
		n = -n;
	}
	_putchar(n + '0');
	return (n);
}
