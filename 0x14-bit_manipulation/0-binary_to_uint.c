#include <stdio.h>
#include "main.h"

/**
 *binary_to_uint - converts binary value in string to decimal.
 *unsigned int binary_to_uint(const char *b)
 *@b: pointer to a string containing the binary number.
 *
 *Return: unsigned integer with decimal number of binary value or 0 if error.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int number;

	number = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		number <<= 1;
		if (b[i] == '1')
			number += 1;
	}
	return (number);
}
