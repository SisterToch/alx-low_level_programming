#include "main.h"
/**
 * _strlen_recursion - function 4 returning length
 * @s: The values of the string
 * str + 1: increments and moves to the next character
 * 1 + str_len_recursive(str + 1) reps the len of the string
 * the extra 1 represents the len of the 1st char
 * return 1 + str_length_recursive(str + 1)- len of str
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len = 1 + _strlen_recursion(s + 1);
	}
	return (len);
}
