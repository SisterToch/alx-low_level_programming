#include <stdio.h>
/**
 * main - program that prints all the arguments it recieves
 * including the first one and prints one argument per line,
 * ending with a new line
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
