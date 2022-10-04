#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - prints a pointer to a newly allocated space in memory.
 * @str: char variable
 * Return: Null
*/

char *_strdup(char *str)
{
	char *inc;
	int x, y;
	int counter = 0;

	if (str == NULL)
	{
	return (NULL);
	}
	for (x = 0; str[x] != '\0'; x++)
	{
	counter = counter + 1;
	}
	ptr = malloc(sizeof(char) * counter + 1);
	if (inc == NULL)
	{
	return (NULL);
	}
	for (y = 0; str[y] != '\0'; y++)
	{
		ptr[y] = str[y];
	}
	ptr[y] = '\0';
	return (inc);
}
