#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * Description: function uses while loop to print the alphabets 10x
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int num = 1;

	while (num <= 10)
	{
		char alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
	_putchar('\n');
	num++;
	}
}
