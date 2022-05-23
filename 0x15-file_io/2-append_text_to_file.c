# include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: text to be appended
 *
 * Return: returns 1 on success or -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length = 0;

	if (filename == NULL)
		return (-1);

	/* Open the file; include the append flag */
	/* to append text at the end of the file */
	fd = open(filename, O_APPEND | O_RDWR);
	if (fd == -1)
		return (-1);

	/* Do this if text_content is not empty */
	if (text_content)
	{
		/* To get the length of text_content */
		while (text_content[length] != '\0')
			length++;

		/* Write(append) text_content to the file pointed to by fd */
		write(fd, text_content, length);
	}

	close(fd);

	return (1);
}

