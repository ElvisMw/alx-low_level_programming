#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - appends text to the file,
 * at the end of the file
 * @filename: represents the file's name
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 upon success, otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int em_file_description, write_status;
	size_t text_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_length] != '\0')
			text_length++;
	}

	em_file_description = open(filename, O_WRONLY | O_APPEND);
	if (em_file_description == -1)
		return (-1);

	if (text_content != NULL)
	{
		write_status = write(em_file_description, text_content, text_length);
		if (write_status == -1)
		{
			close(em_file_description);
			return (-1);
		}
	}

	close(em_file_description);
	return (1);
}
