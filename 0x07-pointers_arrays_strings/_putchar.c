#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/**
 * write_char - Writes a character to standard output.
 *
 * @c: The character to write.
 *
 * Return: On success, returns 1. On error, returns -1 and sets errno.
 */
int write_char(char c)
{
    return (write(1, &c, 1));
}

#endif /* MAIN_H */
