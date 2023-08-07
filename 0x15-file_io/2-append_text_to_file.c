#include "main.h"
/**
 * append_text_to_file - a function that
 * appends text at the end of a file.
 *
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t text_len, printed;/*printed is the bytes written*/

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		text_len = 0;
		while (text_content[text_len] != '\0')
			text_len++;

		printed = write(fd, text_content, text_len);
		if (printed == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
