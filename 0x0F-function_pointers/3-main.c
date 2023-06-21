#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "3-calc.h"
#include "function_pointers.h"
/**
 * main - Gives calc operations
 * @argc: Argument given in the program
 * @argv: Argument vector
 *
 * Return: 0 upon success or 98 if wrong number of arguments
 *         or 99 if invalid operator or  100 if division by 0
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		write(STDERR_FILENO, "Error\n", 6);
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		write(STDERR_FILENO, "Error\n", 6);
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		write(STDERR_FILENO, "Error\n", 6);
		exit(100);
	}

	result = op_func(a, b);
	printf("%d\n", result);

	return (0);
}
