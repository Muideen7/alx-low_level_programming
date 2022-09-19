#include "main.h"

/**
 * print_rev - prints the reverse of a string.
 * @s: input string.
 * Return: nothing.
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		_puthchar(s[1]);
	}
	_putchar('\n');
}
