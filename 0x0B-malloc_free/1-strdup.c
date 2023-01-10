#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	str2 = (char *)malloc(sizeof(char) * (i + 1));

	if (str2 == NULL)
		return (NULL);

	for (n = 0; n <= i; n++)
		str2[n] = str[n];

	return (str2);
}
