#include "main.h"
/**
 * _print - moves a string one place to the left and prints the string
 * @str: string to move
 * @len: size of string
 *
 * Return: void
 */
void _print(char *str, int len)
{
	int i, j;

	i = j = 0;
	while (i < len)
	{
		if (str[i] != '0')
			j = 1;
		if (j || i == len - 1)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
	free(str);
}

/**
 * mul - multiplies a char with a string and places the answer into dest
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index of num
 * @dest: destination of multiplication
 * @dest_index: highest index to start addition
 *
 * Return: pointer to dest, or NULL on failure
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int j, k, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (j = num_index, k = dest_index; j >= 0; j--, k--)
	{
		mul = (n - '0') * (num[j] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[k] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	for (addrem += mulrem; k >= 0 && addrem; k--)
	{
		add = (dest[k] - '0') + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}

/**
 * check_for_digits - checks the arguments to ensure they are digits
 * @av: pointer to arguments
 *
 * Return: 0 if digits, 1 if not
 */
int check_for_digits(char **av)
{
	int i, j;

	for (i = 1; i < 3; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			if (av[i][j] < '0' || av[i][j] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * init - initializes a string
 * @len: len of string
 * @str: the string to be initialized
 *
 * Return: void
 */
void init(char *str, int len)
{
	int i;

	for (i = 0; i < len; i++)
		str[i] = '0';
	str[i] = '\0';
}

/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: zero, or exit status of 98 if failure
 */

int main(int argc, char *argv[])
{
	int l1, l2, ln, j, i;
	char *a;
	char *t;
	char e[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (j = 0; e[j]; j++)
			_putchar(e[j]);
		exit(98);
	}
	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;
	ln = l1 + l2 + 1;
	a = malloc(ln * sizeof(char));
	if (a == NULL)
	{
		for (j = 0; e[j]; j++)
			_putchar(e[j]);
		exit(98);
	}
	init(a, ln - 1);
	for (j = l2 - 1, i = 0; j >= 0; j--, i++)
	{
		t = mul(argv[2][j], argv[1], l1 - 1, a, (ln - 2) - i);
		if (t == NULL)
		{
			for (j = 0; e[j]; j++)
				_putchar(e[j]);
			free(a);
			exit(98);
		}
	}
	_print(a, ln - 1);
	return (0);
}
