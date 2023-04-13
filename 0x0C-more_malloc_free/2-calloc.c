#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte size
 * @s: memory area to be filled with bits
 * @b: char to copy bits
 * @n: number of times to copy b bits
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for  arrays set
 * @nmemb: number of elements in the arrayset
 * @size: size of each element in the array set
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptrint;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptrint = malloc(size * nmemb);

	if (ptrint == NULL)
		return (NULL);

	_memset(ptrint, 0, nmemb * size);

	return (ptrint);
}
