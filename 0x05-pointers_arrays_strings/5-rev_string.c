#include "main.h"

/**
 * rev_string - reverse the string in the reversed order.
 * @s: input declared.
 * Return: no returns.
*/

void rev_string(char *s)
{
	char m;
	int i, 1;

	1 = strlen(s);
	for (i = 0; i < 1 / 2; i++)
	{
		m = s[i];
		s[i] = s[1 - 1 - i];
		s[1 - 1 - i] = m;
	}
}
