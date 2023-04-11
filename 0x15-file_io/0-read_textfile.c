#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads  text file 
* prints to POSIX stdoutput
 * @letters: numb  to read and print
 * @filename: funct to pointer
 *
 * Return: letters to stdout
 * If 0 return filename NuLL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fop, fread, fwrite;
char *buf;

if (filename == NULL)
return (0);

fop = open(filename, O_RDONLY);
if (fop == -1)
return (0);

buf = malloc(sizeof(char) * letters);
if (buf == NULL)
return (0);

fread = read(fop, buf, letters);
if (fread == -1)
{
free(buf);
return (0);
}

fwrite = write(STDOUT_FILENO, buf, fread);
if (fwrite == -1 || fread != fwrite)
{
free(buf);
return (0);
}

free(buf);
close(fop);
return (fwrite);
}
