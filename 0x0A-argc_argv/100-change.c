#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the min number of coins to make change
 * for an amount of money;Usage: ./change cents
 * where cents is the amount of cents you need to give back
 * if the num of arg passed to your program is not exactly 1,
 * print Error, followed by a new line, and return 1
 * if num passed as the arg is negative, print 0, flwd by a new line
 * use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int total, count;
	unsigned int i;
	char *endptr;
	int cents[] = {25, 10, 5, 2};

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	total = strtol(argv[1], &endptr, 10);
	count = 0;

	if (!*endptr)
	{
		while (total > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (total >= cents[i])
				{
					count += total / cents[i];
					total = total % cents[i];
				}
			}
		}
		if (total == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}
