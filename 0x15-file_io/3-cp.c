#include "main.h"

/**
 * main - Program that copies the content of a file to another file
 * @argc: Count of the argument
 * @argv: Vector of the argument
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, file_size;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY, 0);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0064);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((file_size = read(file_from, buf, 1024)) > 0)
	{
		if (write(file_to, buf, file_size) != file_size)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (file_size == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file_from) != 0)
		dprintf(STDERR_FILENO, "Error: Can't close file %i\n", file_from), exit(100);
	if (close(file_to) != 0)
		dprintf(STDERR_FILENO, "Error: Can't close file %i\n", file_to), exit(100);
	return (0);
}
