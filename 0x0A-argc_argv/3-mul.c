#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * print the result of the multiplication, followed by a new line
 * assume that the two numbers and result of the
 * multiplication can be stored in an integer
 * if program does not receive two argumnet, print error
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%d\n", i * j);

	return (0);
}
