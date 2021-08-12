#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h> /* function open */
#include <sys/stat.h>  /* function open */
#include <fcntl.h>     /* function open */
#include <unistd.h>    /* function close */
#include <stdio.h>     /* function dprintf */
#include <stdlib.h>    /* for malloc, free */

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
