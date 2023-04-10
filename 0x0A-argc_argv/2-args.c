#include <stdio.h>
#include "main.h"

/**
 * main - prints all arg received
 * @argc: number of arg
 * @argv: array of arg
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
