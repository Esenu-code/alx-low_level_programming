#include <stdio.h>

/**
 * main = all possible combinations of single-digit numbers.
 *
 * Description: a program that prints all possible combinations of single-digit numbers Separated by commas.
 * Return: Always(0) Success.
 */

int main(void)
{
int i;
for (i = 48; i <= 57; i++)
{
putchar(i);
if (i != 57)
{
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}

