#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints alphabets
 * Description: prints trings of alphabets
 * Return: 0
 */
int main(void)
{
int y;
for (y = 0; y <= 9; y++)
{
putchar('0' + y);
if (y == 9)
break;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
