#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Description: Numbers should be in base 10
 * Return: Always(0) Success
 */

int main(void)
	{
	int n = 0;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}

