#include "main.h"
/**
 *main - copies the content of a file to another file
 *@argc: number of argv
 *@argv: arrays
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int fileO, fileD, wr, rd, cl_O, cl_D;
	char *buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fileO = open(argv[1], O_RDONLY);
	rd = read(fileO, buf, 1024);
	if (fileO == -1 || rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fileD = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	wr = write(fileD, buf, rd);

	if (fileD == -1 || wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	cl_O = close(fileO);
	if (cl_O == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", fileO);
		exit(100);
	}
	cl_D = close(fileD);
	if (cl_D == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", fileD);
		exit(100);
	}
	return (0);
}
