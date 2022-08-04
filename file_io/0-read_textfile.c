#include "main.h"
#include <fcntl.h>
/**
 *read_textfile - reads a text file and prints it to the standard output
 *@filename: namefile that is going to be read
 *@letters: number of letters it should read and print
 *Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc, numW_bytes, numR_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	numR_bytes = read(file_desc, buffer, letters);
	if (numR_bytes == -1)
		return (0);

	numW_bytes = write(STDOUT_FILENO, buffer, numR_bytes);
	if (numW_bytes == -1)
		return (0);

	close(file_desc);
	return (numW_bytes);
}
