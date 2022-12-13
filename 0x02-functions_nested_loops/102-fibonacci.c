#include <stdio.h>

/**
 * main - Prints the add of the Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	long int b1, b2, c;

	b1 = 1;
	b2 = 2;
	printf("%ld, %ld", n1, n2);
	for (a = 0; a < 48; a++)
	{
		c = b1 + b2;
		printf(", %ld", c);
		b1 = b2;
		b2 = c;
	}
	printf("\n");
	return (0);
}

