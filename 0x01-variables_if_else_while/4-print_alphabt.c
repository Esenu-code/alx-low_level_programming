#include <stdio.h>

/**
 * main - prints out the alphabet in lowercase except for 'qe'
 *
 * Description: alphabet in lowercase except for qe
 * Return: Always(0) Success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)

		if (c != 'e' && c != 'q')
			putchar(c);
	
	putchar('\n');
	
	return (0);
}
