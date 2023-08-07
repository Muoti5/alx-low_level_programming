#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
*
* @filename: pointer to the name of the file.
* @letters: is the number of letters it should read and print.
*
* Return: 1 if it worked, or 0 if an error occurred.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, countwr;
	ssize_t count;
	char *size;

	size = malloc(letters);
	if (!size)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	count = read(fd, size, letters);
	size[letters] = '\0';
	close(fd);

	countwr = write(STDOUT_FILENO, size, count);
	if (countwr == -1)
		return (0);

	return (count);
}
