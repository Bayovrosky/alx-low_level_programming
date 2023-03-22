#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
        int i, j, product;

        for (i = 0; i < 10; i++)
        {
                _putchar('0');
                _putchar(',');
                _putchar(' ');

                for (j = 1; j < 10; j++)
                {
                        product = i * j;

                        if (product < 10)
                        {
                                _putchar(' ');
                                _putchar(' ');
                                _putchar(product + '0');
                        }
                        else
                        {
                                _putchar(' ');
                                _putchar((product / 10) + '0');
                                _putchar((product % 10) + '0');
                        }

                        if (j < 9)
                        {
                                _putchar(',');
                                _putchar(' ');
                        }
                }
                _putchar('\n');
        }
}
