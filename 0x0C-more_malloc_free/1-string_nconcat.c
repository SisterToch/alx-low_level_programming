#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: first char
 * @s2: secound char
 * @n: unsigned int
 *
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, z;
	char *s;

	/*get the len of s1*/
	if (s1 == NULL)
	{
		x = 0;
	}
	else
	{
		for (x = 0; s1[x]; ++x)
		;
	}
	/*get the len of s2*/
	if (s2 == NULL)
	{
		y = 0;
	}
	else
	{
		for (y = 0; s2[y]; ++y)
		;
	}
	/*comparre the n to y*/
	if (y > n)
		y = n;
	/*create space via malloc*/
	s = malloc(sizeof(char) * (x + y + 1));
/*the +1is to add the null byte to the new s*/
	if (s == NULL)
		return (NULL);
	/*lenght of the new malloc- c*/
	for (z = 0; z < x; z++)
		s[z] = s1[z];
	for (z = 0; z < y; z++)
	/*concatenate*/
		s[z + x] = s2[z];
	s[x + y] = '\0';
	return (s);
}

