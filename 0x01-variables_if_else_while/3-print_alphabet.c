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
for (y = 'a'; y <= 'z'; y++)
{
putchar(y);
}
for (y = 'A'; y <= 'Z'; y++)
{
putchar(y);
}
putchar('\n');
return (0);
}
