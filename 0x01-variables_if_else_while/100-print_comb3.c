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
int y, z;
for (y = 0; y <= 8; y++)
{
for (z = y + 1; z <= 9; z++)
{
putchar('0' + y);
putchar('0' + z);
if (y == 8 && z == 9)
break;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
