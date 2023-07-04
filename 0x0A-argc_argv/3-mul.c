#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - start of program
 * @argc: number of commandline arguements
 * @argv: array of strings
 * atoi - changes string to integer
 * Return: 0 or 1 is successful of error respectively
 */

int main(int argc, char *argv[])

int multiply(int num1, int num2);
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = multiply(num1, num2);

	printf("%d\n", result);

	return (0);
}
