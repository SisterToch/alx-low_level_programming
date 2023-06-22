#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - funct that adds
  * @a: int
  * @b: int
  *
  * Return: the sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - func that substracts
  * @a: the int
  * @b: the int
  *
  * Return: the subtracted int
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - func that multy
  * @a: the int
  * @b: the int
  *
  * Return: the multiplics
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - func that divs
  * @a: the int
  * @b: the int
  *
  * Return: the div
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - the modulus
  * @a: the int
  * @b: the int
  *
  * Return: modulus
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
