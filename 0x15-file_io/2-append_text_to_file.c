#include "main.h"

/**
 * append_text_to_file - appends texts  at the end of  file
 * @filename: filename.
 * @text_content: content
 *
 * Return: 1 if the file exists. -1 if doesnt
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fop, fwrite, lenght;

if (filename == NULL)
return (-1);
if (text_content != NULL)
{
fop = open(filename, O_WRONLY | O_APPEND);
if (fop == -1)
return (-1);
lenght = 0;
while (*(text_content + lenght) != '\0')
lenght++;
fwrite = write(fop, text_content, lenght);
if (fwrite == -1)
{
close(fop);
write(STDOUT_FILENO, "fails", 5);
return (-1);
}
}
close(fop);
return (1);
}

