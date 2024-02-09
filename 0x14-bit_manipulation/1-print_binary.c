#include <stdio.h>
#include "main.h"

/**
 * _power - calculates  base  power
 * @base: base of the exponent.
 * @power: power of the exponent.
 *
 * Return: value of base  power
 */
unsigned long int _power(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= power; i++)
		num *= base;
	return (num);
}

/**
 *print_binary - prints a number in binary notation
 * @n: the number to print.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int d, c;
	char f;

	f = 0;
	d = _power(2, sizeof(unsigned long int) * 8 - 1);
	while (d != 0)
	{
		c = n & d;
		if (c == d)
		{
			f = 1;
			_putchar('1');
		}
		else if (f == 1 || d == 1)
		{
			_putchar('0');
		}
		d >>= 1;
	}
}
