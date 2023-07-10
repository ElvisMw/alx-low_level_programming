#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

/**
 * create_file - creates a file then  writes text in there
 * @filename: represents the name of the file created
 * @text_content: the NULL-terminated string to write to the file
 * Return: 1 up-on success, -1 on otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int emw_file_description, bytes_written, text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_len])
			text_len++;
	}

	emw_file_description = open(filename, O_WRONLY |
			O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (emw_file_description == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(emw_file_description, text_content, text_len);
		if (bytes_written == -1)
		{
			close(emw_file_description);
			return (-1);
		}
	}

	close(emw_file_description);
	return (1);
}
