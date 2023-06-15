#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers & Print the result,
 * followed by a new lineadds positive numbers.
 * If no number is passed to the program, print 0,
 * flw by a new line,If one of the number contains symbols
 * not digits, print Error, followed by a new line,&return 1
 * assume they are numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, j, sum = 0;
	char *endptr;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		j = strtol(argv[i], &endptr, 10);
		/*strtol converts to long int using base10*/
		if (*endptr)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + j;
		}
	}
	printf("%d\n", sum);

	return (0);
}
