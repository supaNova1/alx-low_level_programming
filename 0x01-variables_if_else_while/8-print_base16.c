#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints strings
 * Description: prints alphabets
 *Return: 0
 */
int main(void)
{
int y;
for (y = 0; y <= 9; y++)
{
putchar('0' + y);
}
for (y = 'a'; y <= 'f'; y++)
{
putchar(y);
}
putchar('\n');
return (0);
}
