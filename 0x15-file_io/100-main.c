#include "main.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return (1);
	}

	print_elf_header(argv[1]);

	return (0);
}

