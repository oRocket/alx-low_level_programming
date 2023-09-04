#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
/**
 * error_exit - Print an error message and exit with a specified code.
 * @code: The exit code.
 * @message: The error message to print.
 */
void error_exit(int code, const char *message)
{
	dprintf(2, "Error: %s\n", message);
	exit(code);
}
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: 0 on success, various exit codes on failure.
 */
int main(int argc, char *argv[])
{
	int fd_source, fd_dest;
	const char *file_to = argv[2];
	const char *file_from = argv[1];
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read;

	if (argc != 3)
	{
		error_exit(97, "Usage: cp file_from file_to");
	}

	fd_source = open(file_from, O_RDONLY);
	if (fd_source == -1)
	{
		error_exit(98, "Can't read from file_from");
	}

	fd_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_dest == -1)
	{
		error_exit(99, "Can't write to file_to");
	}

	while ((bytes_read = read(fd_source, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(fd_dest, buffer, bytes_read) != bytes_read)
		{
			error_exit(99, "Can't write to file_to");
		}
	}

	if (bytes_read == -1)
	{
		error_exit(98, "Can't read from file_from");
	}

	if (close(fd_source) == -1)
	{
		error_exit(100, "Can't close fd_source");
	}

	if (close(fd_dest) == -1)
	{
		error_exit(100, "Can't close fd_dest");
	}
	return (0);
}
