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
ssize_t read_textfile(const char *filename, ssize_t letters)
{
ssize_t fnr, fnw;
char *buff;
int fno;

fno = open(filename, O_RDONLY);
if (fno == -1)
return (0)

buff = malloc(sizeof(char) * letters);
if (buff == NULL)
return (0)


fnr = read(fno, buff, letters);
}
fnr = read(fno, buffer, letters);
close(fnr);
if (fnr == -1)
{

fnw = write(STDOUT_FILENO, buff, fnr);

if (fno == -1 || fnr == -1 || fnw == -1 || fnw != fnr)
{
free(buff);
if (fnr != fnw)
return (0);
}

free(buff);
close(fno);

return (fnw);
}
