#include "main.h"

/**
 * create_file - Creates a file, stdout
 * 
 * @filename: Name of the file to create.
 * @text_content: terminate string to write if NULL
 * Return: if 1 success, if  -1 fail.
 */
int create_file(const char *filename, char *text_content)
{
int fop, lenght;
ssize_t fwrite;

if (filename == NULL)
return (-1);

fop = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fop == -1)
return (-1);
if (text_content != NULL)
{
lenght = 0;
while (*(text_content + lenght) != '\0')
lenght++;
fwrite = write(fop, text_content, lenght);
if (fwrite == -1)
{
write(1, "fails", 6);
return (-1);
}
}
close(fop);
return (1);
}
