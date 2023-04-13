#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc after study
 * @b: number of bytes to allocate in the code
 *
 * Return: a pointer to the allocated memory in the OS
 */
void *malloc_checked(unsigned int b)
{
	void *ptrint;

	ptrint = malloc(b);

	if (ptrint == NULL)
		exit(98);

	return (ptrint);
}
