#include <stdio.h>
/**
 * main - program that prints its name followed
 * by new line
 * @argc: the number of argument
 * @argv: the argument
 * Return: 0
 **/
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
