#include "main.h"

/**
 * create_file - creates new file
 * @filename: name of file to be created
 * @text_content: content to be written to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int  length = 0;

	if (filename == NULL)
		return (-1);

	/* Create new file if it doesn't exist */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (0);

	if (!text_content)
	{
	/* To get length of text_content */
	while (text_content[length] != '\0')
		length++;

	/* Write text_content to the file pointed to by fd */
	write(fd, text_content, length);
	}

	close(fd);

	return (1);
}


