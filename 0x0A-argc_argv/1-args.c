#include <stdlib.h>
#include <Stdio.h>
/**
 * main - prints the number of arguemenys passed into it
 * @argc: count the number of arguemeny in the command line
 * @argv: gives the array of the arguement
 * Return: 0 - success
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("argc = %d\n", argc);
	return (0);
}
