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
int y, x, z;
for (y = 0; y <= 7; y++)
{
for (z = y + 1; z <= 8; z++)
{
for (x = z + 1; x <= 9; x++)
{
putchar('0' + y);
putchar('0' + z);
putchar('0' + x);
if (y == 7 && z == 8 && x == 9)
break;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
