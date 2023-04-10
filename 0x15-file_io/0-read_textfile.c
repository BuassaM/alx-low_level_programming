#include "main.h"

/**
 * read_textfile - reads  text file 
* prints to POSIX stdoutput
 * @letters: numb  to read and print
 * @filename: funct to pointer
 *
 * Return: letters to stdout
 * If 0 return filename NuLL
 */
size_t read_textfile(const char *filename, size_t letters)
{
size_t fno, fnr, fnw;
char *buff;

if (filename == NULL)
return (0);
buff = malloc(sizeof(char) * letters);
if (buff == NULL)
return (0)

fno = open(filename, O_RDONLY)
fnr = read(fno, buff, letters);
fnw = write(STDOUT_FILENO, buff, fnr);
if (fno == -1 || fnr == -1 || fnw == -1 || fnw != fnr)
{
free(buff);
return (0);
}

free(buff);
close(fno);

return (fnw);
}
