#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * 
 * Return: no return.
 */
void _error(int m, char *filename)
{
if (m == 98)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
exit(98);
	}
if (m == 99)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
exit(99);
}
}

void mcp(char *file_from, char *file_to)
{
int foread, fread, fowrite, fwrite;
char *buf[1024];


foread = open(file_from, O_RDONLY);
if (foread < 0)
_error(98, file_from);

fowrite = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fowrite < 0)
{
close(foread);
_error(99, file_to);
}
do {

fread = read(foread, buf, 1024);
if (fread < 0)
_error(98, file_from);

fwrite = write(fowrite, buf, fread);
if (fwrite < fread)
_error(99, file_to);
}	while (fwrite == 1024);
if (close(foread) < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", foread);
close(fowrite);
exit(100);
}
if (close(fowrite) < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fowrite);
exit(100);
}
}

int main(int mac, char *am[])
{
if (mac != 3)
{
dprintf(STDERR_FILENO, "Usage: mcp file_from file_to\n");
exit(97);
}
mcp(am[1], am[2]);
	return (0);
