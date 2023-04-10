#include "main.h"

/**
 * _power - calculate (base and power).
 * @power: power of the exponent
 * @base: base of the  exponent
 * Return: value of base and power
 */

unsigned long int _power(unsigned int base, unsigned int power)
{
	unsigned long int num = 1;

	unsigned int i;

	for (i = 1; i <= power; i++)
		num *= base;
	return (num);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: num of prented
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int dev, result;
	char flag =  0;

	dev = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (dev != 0)
	{
		result = n & dev;
		if (result == dev)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
		/*divides value by 2*/
	}
}
