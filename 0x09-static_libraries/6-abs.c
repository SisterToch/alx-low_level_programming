#include"main.h"
/**
 *_abs - function to c
 *@y: result to be printed
 *
 *Return: 1 if c is lowercase
 *Returns 0 otherwise
 */
int _abs(int y)
{
	if (y >= 0)
	{
		return (y);
	}
	else
	{
		return (y * -1);
	}
	_putchar('\n');
}
