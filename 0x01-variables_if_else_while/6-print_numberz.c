#include <stdio.h>

/**
 * main = all single digit numbers of base 10 starting from 0, followed by a new line.
 *
 * Description: a program that prints all single digit numbers of base 10 starting from 0.
 * Return: Always(0) Success
 */

int main(void)
	{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	putchar ('\n');

	return (0);
}
