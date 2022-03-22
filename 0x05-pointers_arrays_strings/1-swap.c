#include "main.h"

/**
 * swap_int - swaps the one value for another
 * @a: pointer
 * @b: pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
