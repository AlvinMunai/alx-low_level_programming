#include "main.h"

/**
 * swap_int - swaps tha values of 2 integers
 * @a: Pointer to int variable
 * @b: pointer to int variable
 * Return: void meaning correct
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
