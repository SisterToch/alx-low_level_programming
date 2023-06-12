#include "main.h"
/**
 * _strpbrk - finds first char in string 1
 * that matches the character in string 2
 * @s: input value
 * @accept: input value
 *
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return (NULL);
}
