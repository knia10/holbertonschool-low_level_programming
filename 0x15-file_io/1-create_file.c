#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename:  name of the file to create
 * @text_content: writes this content into file
 * Return: 1 on success, -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nl_write;
	int len = 0;

	if (!filename)
	{

		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}
	/*create and open the file with the permissions if not truncate it*/
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	/* if you don't have anything to write, return the file that was created*/
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	nl_write = write(fd, text_content, len); /* start to write */
	if (nl_write == -1 || nl_write != len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
