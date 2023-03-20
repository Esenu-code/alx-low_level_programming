#include <stdio.h>

/**
 * main = the lowercase alphabet in reverse, followed by a new line.
 *
 * Description:  a program that prints the lowercase alphabet in reverse.
 * Return: Always(0) Success.
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}

