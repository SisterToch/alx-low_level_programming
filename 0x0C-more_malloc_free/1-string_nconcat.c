#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 * returned pointer shall point to a newly allocated space
 * in memory, containing s1, flwd by the first n
 * bytes of s2, and null terminated
 * @s1: first char
 * @s2: second char
 * @n: unsigned int
 *
 * Return: If the function fails, it should return NULL
 * If n is greater or equal to the length of s2
 * then use the entire string s2
 * if NULL is passed, treat it as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *str_cat;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i]; i++)
		;
	}
	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; s2[j]; j++)
		;
	}
	if (j > n)
		j = n;
	str_cat = malloc(sizeof(char) * (i + j + 1));
	if (str_cat == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		str_cat[k] = s1[k];
	for (k = 0; k < j; k++)
		str_cat[k + i] = s2[k];
	str_cat[i + j] = '\0';
	return (str_cat);
}

