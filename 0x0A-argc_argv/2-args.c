#include <stdio.h>
#include "main.h"

/**
 * main - start of program
 * @argc: identifies the number of commandline arguements
 * @argv: contains arrays for commandline arguements
 * Return: 0 upon success
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
