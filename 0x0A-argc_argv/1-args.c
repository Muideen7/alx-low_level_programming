#include <stdlib.h>
#include <Stdio.h>
/**
 * main - prints the number of arguemenys passed into it
 * @argc: count the number of arguement in the command line
 * @argv: gives the array of the arguement
 * Return: 0 - success
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
