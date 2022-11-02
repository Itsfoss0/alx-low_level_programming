#include "main.h"

/**
 * read_textfile - read a file text and print to stdout
 * @filename:  Name of  the file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	register int _open, _read, _write;
	register char *buffer = malloc(sizeof(char)  * letters);

	if (!(buffer))
	{
		free(buffer);
		return (0);
	}
	if (!(filename))
	{
		return (0);
	}
	_open = open(filename, O_RDONLY);
	_read = read(_open, buffer, letters);
	_write = write(STDOUT_FILENO, buffer, _read);

	if (_open == -1 || _read == -1 || _write == -1 || !(_write == _read))
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(_open);
	return (_write);
}
