#include <stdio.h>
#include "main.h"

/**
 * main - program's entry point
 * @argc: indicatese the amount of commdandline arguements
 * @argv: array of stringd for all commandline arguements
 * Return: 0 upon success
 */
int main(int argc, char *argv[])
{
	int count = argc - 1;

	printf("%d\n", count);

	(void)argv;

	return (0);
}
