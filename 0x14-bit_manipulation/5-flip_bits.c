#include <stdio.h>
#include "main.h"

/**
 * flip_bits - number of different bits between two numbers
 * @num: first number.
 * @num2: second number.
 *
 * Return: number of bits you would need to flip
 * to get from one number to another.
 */
unsigned int flip_bits(unsigned long int num, unsigned long int num2)
{
	unsigned long int diff, check;
	unsigned int count, i;

	count = 0;
	check = 1;
	diff = num ^ num2;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (check == (diff & check))
			count++;
		check <<= 1;
	}
	return (count);
}
