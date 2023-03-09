#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string being printed out.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
/*the printrevrecursion is a function*/
/*what s+1 does is to work with the function to print reverse*/
