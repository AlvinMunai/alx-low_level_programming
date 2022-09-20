#include "main.h"

/**
 * _strlen - length of string
 * @s: Pointer to string
 *
 * Return: Void (Meaning we are correct)
 */

int _strlen(char *s)
{
	int t;

	t = 0;

	while (s[t] != '\0')
	{
		t++;
	}

	return (t);
}
