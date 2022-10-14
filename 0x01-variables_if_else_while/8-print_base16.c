#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*
*Description -Write a program that prints alphabets in reverses
*
*Return: Always 0 (success)
*/
int main(void)
{
int x;
char y;
for (x = 0; x < 10; x++)
putchar((x % 10) + '0');
{
for (y = 'a'; y <= 'f'; y++)
putchar(y);
}
{
putchar('\n');
}
return (0);
}
