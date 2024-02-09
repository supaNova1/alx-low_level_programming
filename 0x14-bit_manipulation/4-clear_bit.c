#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @num: number to set
 * @index: index at which to set the bit.
 *
 * Return: 1 if it worked, or -1 if  error occurred.
 */
int clear_bit(unsigned long int *num, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = ~(1 << index);
	*num = *num & set;
	return (1);
}
