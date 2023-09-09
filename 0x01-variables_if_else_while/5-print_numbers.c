#include <stdio.h>

/**
 * main - Function that prints all base ten digits.
 *
 * Return: ALways 0 (Success).
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
	}
	putchar('\n');

	return (0);
}
