#include "main.h"

/**
 * _isupper - checks for uppercase
 * @c: variable in use
 * Return: Always 0(Success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
