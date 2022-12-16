#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int n, factor;

	n = 612852475143;
	for (fp = 2; factor <= n; factor++)
	{
		if (n % factor == 0)
		{
			n /= factor;
			factor--;
		}
	}
	printf("%ld\n", factor);
	return (0);
}
