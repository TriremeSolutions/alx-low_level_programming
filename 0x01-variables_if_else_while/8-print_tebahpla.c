#include <stdio.h>

/**
 * main - prints the lowercase english alphabet in reverse.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}