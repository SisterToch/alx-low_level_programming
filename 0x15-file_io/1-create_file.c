#include "main.h"

/**
 * create_file -creates an array of charsand applies permissions
 * @text_content: is a NULL terminated string to write to the file
 * @filename:  name of the file created
 * Return: 1 or 0 upon failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_O, file_W, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		/*calculates len by iteration*/
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file_O = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	/*otrunc to truncate file if it exists*/
	/*0600 allowing only owner read&write*/
	file_W = write(file_O, text_content, len);

	if (file_O == -1 || file_W == -1)
		return (-1);

	close(file_O);

	return (1);
}
