#include "main.h"

/**
 * read_textfile - reads text and prints it to POSIX stdout
 * @filename: name of file to be read
 * @letters: amount of data in bytes to be read and print
 *
 * Return: returns number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t numread, numwrite;
	char *buff;

	if (filename == NULL)
		return (0);

	/* Open the file */
	/* If it fails to open, return 0 */
	fd = open(filename, O_RDONLY);
		if (fd == -1)
			return (0);

	/* Allocate memory for the data to be read */
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	numread = read(fd, buff, letters);
	numwrite = write(STDOUT_FILENO, buff, numread);
	if (numwrite == -1)
		return (0);

	close(fd);
	free(buff);

	return (numwrite);

}

