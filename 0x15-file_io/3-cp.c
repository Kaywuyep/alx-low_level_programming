#include "main.h"

/**
 * handle_error - handle error and print messages to stderr
 * @message: message to be printed
 * @exit_code: code to be exited
 */
void handle_error(const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}
/**
 * copy_file - copy content of one file to another
 * @from_filename: file to be copied from
 * @to_filename: file to be copied to
 * Return: success
 */
int copy_file(const char *from_filename, const char *to_filename)
{
	int fd_from, fd_to;
	char buffer[BUFF_SIZE];
	ssize_t bytes_read, bytes_written;

	/*Open the source file for reading*/
	fd_from = open(from_filename, O_RDONLY);

	if (fd_from == -1)
		handle_error("Error: Can't read from file", 98);

	/*Open or create the destination file for writing*/
	/*truncating it if it exists*/
	fd_to = open(to_filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);

	if (fd_to == -1)
		handle_error("Error: Can't write to file", 99);

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);

		if (bytes_written == -1)
			handle_error("Error: Can't write to file", 99);
		if (bytes_written != bytes_read)
			handle_error("Error: Write did not complete as expected", 99);
	}

	if (bytes_read == -1)
		handle_error("Error: Can't read from file", 98);

	if (close(fd_from) == -1)
		handle_error("Error: Can't close fd", 100);

	if (close(fd_to) == -1)
		handle_error("Error: Can't close fd", 100);

	return (0);
}
/**
 * main - entry point
 * @argc: argument command
 * @argv: argument vector
 * Return: copy of files
 */
int main(int argc, char *argv[])
{
	const char *from_filename;
	const char *to_filename;

	if (argc != 3)
		handle_error("Usage: cp file_from file_to", 97);

	from_filename = argv[1];
	to_filename = argv[2];

	return (copy_file(from_filename, to_filename));
}
