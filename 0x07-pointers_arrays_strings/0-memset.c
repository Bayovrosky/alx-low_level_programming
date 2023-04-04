#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s with
 * the constant byte b
 * @s: pointer to the memory area to be filled
 * @b: the constant byte to fill the memory with
 * @n: the number of bytes to be filled
 *
 * Return: a pointer to the filled memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
    {
        s[i] = b;
    }

    return s;
}
