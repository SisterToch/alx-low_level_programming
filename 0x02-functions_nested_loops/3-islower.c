#include"main.h"
/**
 *_islower - function to check lower case
 *@c: parameter to be printed
 *
 *Return: 1 if c is lowercase
 *Returns 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

