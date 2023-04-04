#ifndef _MEMCPY_H_
#define _MEMCPY_H_

#include <stddef.h>

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest.
 *
 * @dest: A pointer to the memory area to copy to.
 * @src: A pointer to the memory area to copy from.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
