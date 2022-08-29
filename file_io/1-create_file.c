#include "main.h"
/**
 *create_file - function that creates a file
 *@filename: name of the file to create
 *@text_content: it's a NULL terminated string to write to the file
 *Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc, nbytes, len_text;

	len_text = 0;

	if (filename == NULL)
		return  (-1);

	file_desc = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (file_desc == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[len_text] != '\0')
		len_text++;

	nbytes = write(file_desc, text_content, len_text);
	if (nbytes == -1)
		return (0);

	close(file_desc);

	return (1);
}
