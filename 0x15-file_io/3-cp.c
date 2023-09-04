#include "main.h"
/**
 * handle_error - Function to handle errors and exit with the appropriate code
 * @fd_from: file from
 * @fd_to: file to
 * @argv: ...
 */
void handle_error(int fd_from, int fd_to, char *argv[])
{
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * copy_file - Function to perform the file copy operation
 * @from_filename: ...
 * @to_filename: ...
 * @args: ...
 * Return: sucess
 */
int copy_file(char *from_filename, char *to_filename, char *args[])
{
	int fd_from, fd_to, err_close;
	ssize_t bytes_read, bytes_written;
	char buf[BUFF_SIZE];

	fd_from = open(from_filename, O_RDONLY);
	fd_to = open(to_filename, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	handle_error(fd_from, fd_to, args);

	bytes_read = BUFF_SIZE;
	while (bytes_read == BUFF_SIZE)
	{
		bytes_read = read(fd_from, buf, BUFF_SIZE);
		if (bytes_read == -1)
			handle_error(-1, 0, args);
		bytes_written = write(fd_to, buf, bytes_read);
		if (bytes_written == -1)
			handle_error(0, -1, args);
	}

	err_close = close(fd_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	err_close = close(fd_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
/**
 * main - entry point
 * @argc: number of arguments.
 * @argv: arguments vector
 * Return: success
 */
int main(int argc, char *argv[])
{
	char **args;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	args = (char **)malloc(4 * sizeof(char *));
	if (args == NULL)
	{
		perror("malloc");
		exit(1);
	}

	args[0] = argv[0];
	args[1] = argv[1];
	args[2] = argv[2];
	args[3] = NULL;

	copy_file(argv[1], argv[2], args);

	free(args); /*Don't forget to free the allocated memory*/

	return (0);
}
