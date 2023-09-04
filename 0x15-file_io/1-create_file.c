#include "main.h"
/**
 * file_exists - a function that checks in the file already exists
 * @filename: the file to be checked
 * Return: status of the file
 */
int file_exists(const char *filename)
{
	struct stat buffer;

	return (stat(filename, &buffer) == 0);
}
/**
 * create_file - a function that creates a file
 * @filename: the file to be created
 * @text_content: the content of the given file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	/*Check if the file already exists*/
	if (file_exists(filename))
	{
		/*Open the file in truncate mode*/
		 /*keeping its existing permissions*/
		fd = open(filename, O_WRONLY | O_TRUNC, 0);

		if (fd == -1)
			return (-1);
	}
	else
	{
		/*Create a new file with rw-------*/
		fd = open(filename, O_WRONLY | O_CREAT, 0600);

		if (fd == -1)
			return (-1);
	}

	/*Check if text_content is NULL or empty*/
	if (text_content != NULL && text_content[0] != '\0')
	{
		bytes_written = write(fd, text_content, strlen(text_content));

		if (bytes_written == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
