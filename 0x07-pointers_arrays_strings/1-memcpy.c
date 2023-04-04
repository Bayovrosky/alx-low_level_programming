#include "main.h"

/**
 * _memcpy - Copies n bytes from the memory area src to the memory area dest.
 *
 * @dest: A pointer to the memory area to copy to.
 * @src: A pointer to the memory area to copy from.
 * @n: The number of bytes to copy from src to dest.
 *
 * Return: A pointer to the copied memory area @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
