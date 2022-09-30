#include <Stdio.h>
/**
 * main - prints the number of arguemenys passed into it
 * @argc: count the number of arguement in the command line
 * @argv: gives the array of the arguement
 * Return: 0 - success
*/
int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++);
		printf("%d\n", i - 1);
	}
	return (0);
}
