#include "main.h"
/**
 * _strchr - Entry point
 * @s: input value
 * @c: input value
 *
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
