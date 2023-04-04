#include <stdio.h>

/**
 * main - print all single digit numbers of base 10, followed by a new line
 * Description: using the main function
 * program prints "all single digit numbers of base 10, followed by a new line"
 * Return: 0
 */


int main(void)

{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
