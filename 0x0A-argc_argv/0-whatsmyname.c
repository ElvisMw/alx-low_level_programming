#include <stdio.h>
#include "main.h"

/**
 * print_prog_name - Prints program's name
 * @argc: commandline arguements number
 * @argv: array of strings for the arguements
 */

void print_prog_name(int argc, char *argv[])
{
	printf("%s\n ", argv[0]);
}
