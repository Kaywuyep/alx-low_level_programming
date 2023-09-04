#include "main.h"
/**
 * file_exists - a function that checks if a file exists
 * @filename: file to be checked
 * Return: the permission status
 */
int file_exists(const char *filename)
{
	return (access(filename, F_OK) != -1);
}
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: file to be used
 * @text_content: the content of file to be appended
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int num_letters;
	int bytes_written;

	if (filename == NULL)
		return (-1);

	if (!file_exists(filename))
		return (-1);
	if (text_content == NULL)
        return (1); /*Nothing to append, return success*/

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (num_letters = 0; text_content[num_letters]; num_letters++)
			;

		bytes_written = write(fd, text_content, num_letters);

		if (bytes_written == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
