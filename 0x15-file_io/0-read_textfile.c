#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard.
 * @filename: file to read.
 * @letters: is the number of letters it should read and print.
 * Return: number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /*file descriptor*/
	ssize_t nl_read, nl_write;
	char *buff;
	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY); /*open file*/
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters); /*malloc for buffer*/
	if (buff == NULL)
		return (0);

	nl_read = read(fd, buff, letters); /*read file open*/
	if (nl_read == -1)
	{
		free(buff); /*free malloc*/
		return (0);
	}
	nl_write = write(STDOUT_FILENO, buff, nl_read); /*write file open*/
	if (nl_write == -1)
	{
		free(buff); /*free malloc*/
		return (0);
	}
	close(fd); /*close file*/
	return (nl_read);
}
