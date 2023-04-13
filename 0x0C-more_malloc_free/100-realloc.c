#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptrint: pointer to the memory previsouly allocated by malloc.
 * @old_size: size of the allocated memory for ptrint.
 * @new_size: new size of the new memory block ptrint1
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptrint, unsigned int old_size, unsigned int new_size)
{
	char *ptrint1;
	char *old_ptrint;
	unsigned int i;

	if (new_size == old_size)
		return (ptrint);

	if (new_size == 0 && ptrint)
	{
		free(ptrint);
		return (NULL);
	}

	if (!ptrint)
		return (malloc(new_size));

	ptrint1 = malloc(new_size);
	if (!ptrint1)
		return (NULL);

	old_ptrint = ptrint;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptrint1[i] = old_ptrint[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptrint1[i] = old_ptrint[i];
	}

	free(ptrint);
	return (ptrint1);
}
