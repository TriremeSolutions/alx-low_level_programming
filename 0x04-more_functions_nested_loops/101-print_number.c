#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int a, b, track;

	if (n < 0)
	{
		_putchar(45);
		b = n * -1;
	}
	else
	{
		b = n;
	}

	a = b;
	track = 1;

	while (a > 9)
	{
		a /= 10;
		track *= 10;
	}

	for (; track >= 1; track /= 10)
	{
		_putchar(((b / track) % 10) + 48);
	}
}
