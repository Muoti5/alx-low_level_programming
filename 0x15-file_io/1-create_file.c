#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file - This function creates a file
 * @filename: The name of the filename to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 (Success) -1 (Failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0;

	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		write(fd, text_content, strlen(text_content));
	}

	close(fd);

	return (1);
}
