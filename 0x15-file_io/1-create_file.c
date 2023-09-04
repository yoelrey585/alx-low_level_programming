#include "main.h"
/**
 * create_file - function for the file creation
 * @filename: name of .txt file
 * @text_content: characters to be written to file
 *
 * Return: 1 on success, -1 on failure
**/
int create_file(const char *filename, char *text_content)
{
	int file_d, w, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (file_d == -1 || w == -1)
		return (-1);

	close(file_d);

	return (1);
}
