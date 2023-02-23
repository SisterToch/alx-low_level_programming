#include"main.h"
/**
 *print_last_digit - function to c
 *@c: result to be printed
 *
 *Return: 1 if c is lowercase
 *Returns 0 otherwise
 */
int print_last_digit(int c)
{
	int y;

	y = c % 10;
	if (c < 0)
	{
		_putchar(-y + 48);
		return (-y);
	}
	else
	{
		_putchar(y + 48);
		return (y);
	}
	_putchar('\n');
}
