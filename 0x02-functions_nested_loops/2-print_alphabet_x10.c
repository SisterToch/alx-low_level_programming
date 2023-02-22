#include"main.h"
/**
 *print_alphabet_x10 - function that prints alphabet in ten places
 *
 *Return: always 0;
 */
void print_alphabet_x10(void)
{
	int i;
	char y;

	for (i = 0; i <= 9; i++)
	{
		for (y = 'a'; y <= 'z'; y++)
			_putchar(y);
	}
	_putchar('\n');
}
