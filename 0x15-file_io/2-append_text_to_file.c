#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	register int _file, _write, text_len = 0;

	if (!(filename))
	{
		return (-1);
	}
	_file = open(filename, O_WRONLY, O_APPEND);
	if (_file == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[text_len])
		{
			text_len++;
		}
		_write = write(_file, text_content, text_len);
		if (_write == -1)
		{
			return (-1);
		}
	}
	close(_file);
	return (1);
}
