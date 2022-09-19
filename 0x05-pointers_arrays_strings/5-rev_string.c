#include "main.h"

/**
 * rev_string - reverse the string in the reversed order.
 * @s: input declared.
 * Return: no returns.
*/

void rev_string(char *s)
{
	char m;
	int i, middle;

	1 = strlen(S);
	for (i = 0; i < middle / 2; i++)
	{
		m = s[i];
		s[i] = s[middle - 1 - i];
		s[middle - 1 - i] = m;
	}
}
