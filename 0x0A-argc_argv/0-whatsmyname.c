#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: counts the argument
 * @argv: the argument
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
