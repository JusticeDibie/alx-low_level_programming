#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*
*Description -Write a program that prints decimal numbers
*
*Return: Always 0 (success)
*/
int main(void)
{
int n;
for (n = 0; n < 10; n++)
putchar((n % 10) + '0');
{
putchar('\n');
}
return (0);
}
