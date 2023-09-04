#include "main.h"
/**
 * create_file - Creates or truncates a file and writes text content to it.
 * @filename: The name of the file to create or truncate.
 * @text_content: The content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1); /* Return -1 if filename is NULL */

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1); /* Return -1 on failure to open or create the file */

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1); /* Return -1 if writing to the file fails */
		}
	}

	close(fd);
	return (1); /* Return 1 on success */
}
