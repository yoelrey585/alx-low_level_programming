#include "main.h"
/**
 * create_file - function to create file.
 * @filename: name of function
 * @text_content: string of character to be written
 *
 * Return: 1 on success, -1 on failure
**/
int create_file(const char *filename, char *text_content)
{
	int o_pen, w_rite, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o_pen = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w_rite = write(o_open, text_content, len);

	if (o_pen == -1 || w_rite == -1)
		return (-1);

	close(o_pen);

	return (1);
}
