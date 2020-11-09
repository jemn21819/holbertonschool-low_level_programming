#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>


/* _putchar */
int _putchar(char c);


/* 0-read_textfile.c */
ssize_t read_textfile(const char *filename, size_t letters);


/* 1-create_file.c */
int create_file(const char *filename, char *text_content);


/* 2-append_text_to_file.c */
int append_text_to_file(const char *filename, char *text_content);

#endif
