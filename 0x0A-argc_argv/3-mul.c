#include <stdio.h>
#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: String to be converted.
 *
 * Return: The integer converted from the string.
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	/* Calculate the length of the string.*/
	while (s[len] != '\0')
		len++;

	/* Loop through each character in the string.*/
	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	/* If no valid integer is found, return 0.*/
	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - Multiplies two numbers.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	/* Check if the correct number of arguments is passed.*/
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert the command-line arguments to integers.*/
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	/* Multiply the two numbers.*/
	result = num1 * num2;

	/* Print the result.*/
	printf("%d\n", result);

	return (0);
}
