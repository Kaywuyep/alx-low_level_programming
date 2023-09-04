#include "main.h"
/**
 * read_file_contents - a function that reads the content of the file
 * @file: the file to be read from
 * @buffer: temporay storage before printing
 * @letters: num of letters it should read
 * Return: num of letters it could read
 */
ssize_t read_file_contents(FILE *file, char *buffer, size_t letters)
{
	ssize_t bytesRead;

	bytesRead = fread(buffer, sizeof(char), letters, file);
	return (bytesRead);
}
/**
 * write_to_stdout - a function that prints to stdout
 * @buffer: temporary storage before printing
 * @size: number of bytes read
 * Return: total bytes written
 */
ssize_t write_to_stdout(const char *buffer, ssize_t size)
{
	ssize_t bytesWritten;

	bytesWritten =  write(STDOUT_FILENO, buffer, size);
	return (bytesWritten);
}
/**
 * read_textfile -  func that reads a text file and prints it to POSIX stdout
 * @filename: the file to be read and printed from
 * @letters: num of letters to read and print
 * Return: num of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t bytesRead, bytesWritten;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = (char *)malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	bytesRead = read_file_contents(file, buffer, letters);
	buffer[bytesRead] = '\0';  /*Null-terminate the string*/

	bytesWritten = write_to_stdout(buffer, bytesRead);
	free(buffer);
	fclose(file);

	if (bytesWritten != bytesRead)
		return (0);

	return (bytesWritten);
}

