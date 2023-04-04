#include <stdio.h>

/**
 * main - print all single digit numbers of base 10, followed by a new line
 * Description: using the main function
 * program prints "all single digit numbers of base 10, followed by a new line"
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
