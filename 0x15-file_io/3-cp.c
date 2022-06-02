#include "main.h"
/**
 * error_type - Function to state error type
 * @err_num: Error number
 * @filename: Name of file
 */
void error_type(int err_num, char *filename)
{
	if (err_num == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(err_num);
	}
	if (err_num == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(err_num);
	}
}
/**
* cp_file - Function to copy a file to another
 * @file_from: File to copy content from
 * @file_to: File to copy content to
 * Return: Void
 */
void cp_file(char *file_from, char *file_to)
{
	int from_read, from_write, to_read, to_write;
	char buf[1024];

	from_read = open(file_from, O_RDONLY);
	if (from_read == -1)
		error_type(98, file_from);
	from_write = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0064);
	if (from_write == -1)
	{
		close(from_read);
		error_type(99, file_to);
	}
	do {
		to_read = read(from_read, buf, 1024);
		if (to_read < 0)
			error_type(98, file_from);
		to_write = write(from_write, buf, to_read);
		if (to_write < to_read)
			error_type(99, file_to);
	}	while (to_write == 1024);
	if (close(from_read) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %i\n", from_read);
		close(from_write);
		exit(100);
	}
	if (close(from_write) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %i\n", from_write);
		exit(100);
	}
}
/**
 * main - Program that copies the content of a file to another file
 * @argc: Count of the argument
 * @argv: Vector of the argument
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp_file(argv[1], argv[2]);
	return (0);
}
