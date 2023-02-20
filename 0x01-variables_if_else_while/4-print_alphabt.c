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
for (y = 'a'; y <= 'z'; y++)
{
if (y != 'e' && y != 'q')
{
putchar(y);
}
}
putchar('\n');
return (0);
}
