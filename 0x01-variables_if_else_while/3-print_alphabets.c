#include <stdio.h>

/**
 * main = the alphabet in loewrcase, and then in uppercase, followed by a new lne.
 *
 * Description: a program that prints the alphabet in lowercase and then in uppercase.
 * Return: Always(0) Success
 */

int main(void)
{
	char a = 'a';
	char b = 'A';

	while (a <= 'z')
	{
		putchar (a);
		a++;
	}
	while (b <= 'Z')
	{
		putchar (b);
		b++;
	}
	putchar ('\n');

	return (0);
}
