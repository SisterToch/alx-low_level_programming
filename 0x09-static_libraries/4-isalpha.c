#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: the character to be checked
 *
 * Return: 1 if c is a letter,else 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
