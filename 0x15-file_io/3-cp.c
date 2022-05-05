#include "main.h"

/**
 * _cp - to copy from one file to the other
 * @file_from: pointer to source file
 * @file_to: pointer to destination file
 *
 * Return: return 1 if successful
 */
int _cp(char *file_from, char *file_to)
{
	int fd_from, fd_to, closeto, closefrom;
	char buff[1024];
	ssize_t numwrite, numread = 1024;

	/* Open destination file and set to readonly */
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", file_from);
		exit(98);
	}

	/* Create destination file and set to writeonly */
	/* If file already exists, truncate it */
	/* Then set file permission to -rw-rw-r */
	fd_to = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	while (numread > 0)
	{
		numread = read(fd_from, buff, 1024);
		if (numread == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		numwrite = write(fd_to, buff, numread);
		if (numwrite == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	closefrom = close(fd_from);
	if (closefrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	closeto = close(fd_to);
	if (closeto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (1);
}

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: elements of argument
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	_cp(argv[1], argv[2]);

	return (0);
}

