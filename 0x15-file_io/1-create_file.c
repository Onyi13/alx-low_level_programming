#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int create_file(const char *filename, char *text_content);
int main(int ac, char **av)
{int res;
if (ac != 3)
{dprintf(2, "Usage: %s filename text\n", av[0]);
exit(1); }
res = create_file(av[1], av[2]);
printf("-> %i)\n", res);
return (0); }
int create_file(const char *filename, char *text_content)
{int fd, write_result;
ssize_t len = 0;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[len] != '\0')
len++;
write_result = write(fd, text_content, len);
if (write_result == -1 || write_result != len)
{close(fd);
return (-1); }}
close(fd);
return (1); }
