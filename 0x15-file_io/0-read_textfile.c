#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a text file then
 * prints it to the POSIX standard output
 * @filename: Represents name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters it could read
 * and print, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int emw_file_descriptor;
	ssize_t num_read, num_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	emw_file_descriptor = open(filename, O_RDONLY);
	if (emw_file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(emw_file_descriptor);
		return (0);
	}

	num_read = read(emw_file_descriptor, buffer, letters);
	if (num_read == -1)
	{
		free(buffer);
		close(emw_file_descriptor);
		return (0);
	}

	num_written = write(STDOUT_FILENO, buffer, num_read);
	if (num_written == -1 || num_written != num_read)
	{
		free(buffer);
		close(emw_file_descriptor);
		return (0);
	}

	free(buffer);
	close(emw_file_descriptor);
	return (num_written);
}
