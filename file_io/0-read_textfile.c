#include "main.h"
/*
 *
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, br, bw;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}

	br = read(fd, buff, letters);
	if (br == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	bw = write(STDOUT_FILENO, buff, br);
	if (bw == -1 || bw != br)
	{
		free(buff);
		close(fd);
		return (0);
	}

	free(buff);
	close(fd);

	return (bw);
}
