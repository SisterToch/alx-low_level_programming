#include "main.h"

/**
 * append_text_to_file -the function appends text at the end of file.
 * @filename: pointer to file name.
 * @text_content: The string added at the end  of file.
 * Return: return  1 on sucess, -1 if null or  upon failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_O, file_W, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file_O = open(filename, O_WRONLY | O_APPEND);
	file_W = write(file_O, text_content, len);

	if (file_O == -1 || file_W == -1)
		return (-1);

	close(file_O);

	return (1);
}
