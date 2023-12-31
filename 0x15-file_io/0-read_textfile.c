#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: file to be checked
 * @letters: number of letters to be read or written
 *
 * Return: the actual number of letters it could read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	ssize_t length_read, length_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_desc = open(filename, O_RDONLY);

	if (file_desc == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(file_desc);
		return (0);
	}

	length_read = read(file_desc, buffer, letters);
	close(file_desc);

	if (length_read == -1)
	{
		free(buffer);
		return (0);
	}

	length_written = write(STDOUT_FILENO, buffer, length_read);
	free(buffer);

	if (length_read != length_written)
		return (0);

	return (length_written);
}
