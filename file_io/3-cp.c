#include "main.h"
/**
 *main - copies the content of a file to another file
 *@argc: number of argv
 *@argv: arrays
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int fileO, fileD, wr, cl_O, cl_D;
	char *buf[1024];
	ssize_t rd = 1024;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fileO = open(argv[1], O_RDONLY);
	fileD = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error_open(fileO, fileD, argv);

	while (rd == 1024)
	{
		rd = read(fileO, buf, 1024);
		if (rd == -1)
			error_open(-1, 0, argv);

		wr = write(fileD, buf, rd);
		if (wr == -1)
			error_open(0, -1, argv);
	}
	cl_O = close(fileO);
	if (cl_O == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileO);
		exit(100);
	}
	cl_D = close(fileD);
	if (cl_D == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileO);
		exit(100);
	}
	return (0);
}
/**
 *error_open - verifactes if a file can be opened
 *@fileO: origin file
 *@fileD: destination file
 *@argv: arrays
 */
void error_open(int fileO, int fileD, char *argv[])
{
	if (fileO == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fileD == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
