#include "main.h"
#include <stdio.h>
/**
 * append_text_to_file - function appends text at the end of a file.
 * @filename: name of file.
 * @text_content: text to append to the file.
 * Return: 1 Success or -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdesc, length = 0;
	ssize_t res_write;

	if (filename == NULL)
		return (-1);

	fdesc = open(filename, O_WRONLY | O_APPEND, 0664);

	if (fdesc < 0)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
		{
			length++;
		}
		res_write = write(fdesc, text_content, length);

		if (res_write < 0)
			return (-1);
	}

	close(fdesc);
	return (1);
}
