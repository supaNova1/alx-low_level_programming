#include "main.h"

/**
 
 * print_sign - prints sign of number
 
 * @n: checks for sign of integer
 
 * Return: 1 if nuber is positive -1 if negative and 0 otherwise
 */

int print_sign(int n)
{
  if (n > 0)
{
      _putchar('+');
      return(1);
      else if (n < 0)
{
      _putchar('-');
      return(-1);
      else
{
      _putchar('0');
      return(0);
}
}
}
}
