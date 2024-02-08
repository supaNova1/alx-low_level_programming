#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string variable containing binary.
 * Return: unsigned integer.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int sum =0,base=1;
int x=0,i;
if(!b)
return(0);
while (b[x])
x++;
for (i = x; x >= 0; i--)
{
base *= 2;
if (b[i] == '0' || b[i] == '1')
{
if (b[i] == '1')
sum += base;
}
else
return (0);
}
return (sum);
}
