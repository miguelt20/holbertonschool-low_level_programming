#include "main.h"
/**
 *append_text_to_file - appends text at the end of a file
 *@filename:  name of the file
 *@text_content: it's the NULL terminated string to add at the end of the file
 *Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, n_bytes, len_text = 0;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_WRONLY | O_APPEND);
		if (file_desc == -1)
			return (-1);

	if (text_content == NULL && filename)
		return (1);

	else if (text_content != NULL)
	{
		while (text_content[len_text] != '\0')
			len_text++;
	}
	else
		return (-1);

	n_bytes = write(file_desc, text_content, len_text);
	if (n_bytes == -1)
		return (-1);

	close(file_desc);
	return (1);
}
