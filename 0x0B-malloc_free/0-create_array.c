#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of char and init it with a specific char
 * @size: the size of the array to create
 * @c: the character to initialize the array with
 *
 * Description: This function creates an array of size "size" and initializes
 *              all its elements to the character "c". It returns a pointer
 *              to the created array, or NULL if the function fails.
 *
 * Return: a pointer to the created array, or NULL if the function fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
