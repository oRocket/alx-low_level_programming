#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

#define BUFFER_SIZE 1024

void error_and_exit(int exit_code, const char *message);
int open_file(const char *filename, int flags, mode_t mode);
void copy_file(const char *src_filename, const char *dest_filename);
void close_file(int fd);


ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


#endif /* main.h */
