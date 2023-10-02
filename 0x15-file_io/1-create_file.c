#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/*
* Creates a file.
* filename: name of the file to create
* text_content: string to write to the file
* Returns: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{int fd, write_res;
int length = 0;
if (!filename)
return (-1);
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);
if (!text_content)
{close(fd);
return (1); }
while (text_content[length])
length++;
write_res = write(fd, text_content, length);
if (write_res == -1 || write_res != length)
{close(fd);
return (-1); }
close(fd);
return (1); }
