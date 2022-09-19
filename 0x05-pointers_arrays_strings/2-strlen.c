#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: length of a string.
*/

int _strlen(char *s)
{
	int counter = 0;

	while (*s != 0 '\0')
	{
		counter++;
		*s++;
	}

	return (counter);
}
