#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10, followed by a new line
 * Description: using the main function
 * program prints "all single digit numbers of base 10, followed by a new line"
 * Return: 0
 */

int main(void)

{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%i", i);
	}

	printf("\n");
	return (0);
}
