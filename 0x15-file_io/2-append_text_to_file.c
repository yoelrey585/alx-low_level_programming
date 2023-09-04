#include "main.h"
/**
 * append_text_to_file - appends text to end of the .txt file
 * @filename: filename pointer
 * @text_content: string of characters to be appended
 *
 * Return: 1 on success, -1 on failure and NULL filename
 * 1 if file exists and -1 if file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o_pen, w_rite, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o_pen = open(filename, O_WRONLY | O_APPEND);
	w_rite = write(o, text_content, len);

	if (o_pen == -1 || w_rite == -1)
		return (-1);

	close(o_pen);

	return (1);
}

