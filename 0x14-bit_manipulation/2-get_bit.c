#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @num: number to check bits in
 * @index: index at which to check bit
 *
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int num, unsigned int index)
{
	unsigned long int divide, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divide = 1 << index;
	check = num & divide;
	if (check == divide)
		return (1);
	return (0);
}
