#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - This function reads a text file and prints it to the POSIX
 * standard output
 * @filename: The file
 * @letters: letters
 *
 * Return: actual number of letters it could read and print (Success)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, file, reader;
	char *size = malloc(sizeof(char *) * letters);

	if (!size)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	file = read(fd, size, letters);
	size[letters] = '\0';
	close(fd);

	reader = write(STDOUT_FILENO, size, file);
	if (reader == -1)
		return (0);

	return (file);
}
