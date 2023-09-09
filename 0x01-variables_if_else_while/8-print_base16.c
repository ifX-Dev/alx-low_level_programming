#include <stdio.h>

/**
 * main - Print all base 16 digits.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int num;
	char let;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
	}
	for (let = 'a'; let <= 'f'; let++)
	{
		putchar(let);
	}
	putchar('\n');

	return (0);
}
