#include "main.h"
/**
 * _power - calculate base and power
 * @base: base
 * @pow: power
 * Return: value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int number;
	unsigned int i;

	number = 1;
	/*1 bcus any no raised to pow0 is 1*/
	for (i = 1; i <= pow; i++)
		number *= base;
	return (number);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: input of the printed num
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int highest_pow, result;
	char flag;

	flag = 0;
	highest_pow = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (highest_pow != 0)
	{
		result = n & highest_pow;
		if (result == highest_pow)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || highest_pow == 1)
		{
			_putchar('0');
		}
		highest_pow >>= 1;
	}
}
